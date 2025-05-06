#pragma once
#include "Cases.cpp"

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class Connection
{
private:
    static String^ connString = "Data Source=localhost;Initial Catalog=Ehsan;Integrated Security=True;Encrypt=False";
    static SqlConnection^ sqlConn;

    static void Connect() {
        sqlConn = gcnew SqlConnection(connString);
        try {
            sqlConn->Open();
        }
        catch (Exception^ ex) {
            System::Windows::Forms::MessageBox::Show("Error: " + ex->Message);
        }
    }

    static void Disconnect() {
        if (sqlConn && sqlConn->State == System::Data::ConnectionState::Open) {
            sqlConn->Close();
        }
    }

public:
    // Insert Case
    static void InsertCase(Cases^ c) {
        Connect();  // فتح الاتصال

        String^ query = "INSERT INTO Cases (NationalID, FName, LName, NickName, Gender, BirthDate, Area, Street, MaritalStatus, FatherStatus, MotherStatus, MaleChildren, FemaleChildren, IsActive) " +
            "VALUES (@NationalID, @FName, @LName, @NickName, @Gender, @BirthDate, @Area, @Street, @MaritalStatus, @FatherStatus, @MotherStatus, @MaleChildren, @FemaleChildren, @IsActive)";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        cmd->Parameters->AddWithValue("@NationalID", c->NationalID != nullptr ? static_cast<Object^>(c->NationalID) : DBNull::Value);
        cmd->Parameters->AddWithValue("@FName", c->FName != nullptr ? static_cast<Object^>(c->FName) : DBNull::Value);
        cmd->Parameters->AddWithValue("@LName", c->LName != nullptr ? static_cast<Object^>(c->LName) : DBNull::Value);
        cmd->Parameters->AddWithValue("@NickName", c->NickName != nullptr ? static_cast<Object^>(c->NickName) : DBNull::Value);
        cmd->Parameters->AddWithValue("@Gender", c->Gender.HasValue ? static_cast<Object^>(c->Gender.Value) : DBNull::Value);
        cmd->Parameters->AddWithValue("@BirthDate", c->BirthDate.HasValue ? static_cast<Object^>(c->BirthDate.Value) : DBNull::Value);
        cmd->Parameters->AddWithValue("@Area", c->Area != nullptr ? static_cast<Object^>(c->Area) : DBNull::Value);
        cmd->Parameters->AddWithValue("@Street", c->Street != nullptr ? static_cast<Object^>(c->Street) : DBNull::Value);
        cmd->Parameters->AddWithValue("@MaritalStatus", c->MaritalStatus != nullptr ? static_cast<Object^>(c->MaritalStatus) : DBNull::Value);
        cmd->Parameters->AddWithValue("@FatherStatus", c->FatherStatus.HasValue ? static_cast<Object^>(c->FatherStatus.Value) : DBNull::Value);
        cmd->Parameters->AddWithValue("@MotherStatus", c->MotherStatus.HasValue ? static_cast<Object^>(c->MotherStatus.Value) : DBNull::Value);
        cmd->Parameters->AddWithValue("@MaleChildren", c->MaleChildren.HasValue ? static_cast<Object^>(c->MaleChildren.Value) : DBNull::Value);
        cmd->Parameters->AddWithValue("@FemaleChildren", c->FemaleChildren.HasValue ? static_cast<Object^>(c->FemaleChildren.Value) : DBNull::Value);
        cmd->Parameters->AddWithValue("@IsActive", c->IsActive.HasValue ? static_cast<Object^>(c->IsActive.Value) : DBNull::Value);

        try {
            cmd->ExecuteNonQuery();
            System::Windows::Forms::MessageBox::Show("تم العمل بنجاح");
        }
        catch (Exception^ ex) {
            System::Windows::Forms::MessageBox::Show("حدث خطأ أثناء الإضافة: " + ex->Message);
        }

        Disconnect();  // إغلاق الاتصال
    }

    // Get Case by ID
    static Cases^ GetCaseByID(int id)
    {
        Connect(); // فتح الاتصال

        String^ query = "SELECT * FROM Cases WHERE ID = @ID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        cmd->Parameters->AddWithValue("@ID", id);

        Cases^ result = nullptr;

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read())
            {
                result = gcnew Cases();

                result->ID = reader->IsDBNull(0) ? Nullable<int>() : reader->GetInt32(0);
                result->NationalID = reader->IsDBNull(1) ? nullptr : reader->GetString(1);
                result->FName = reader->IsDBNull(2) ? nullptr : reader->GetString(2);
                result->LName = reader->IsDBNull(3) ? nullptr : reader->GetString(3);
                result->NickName = reader->IsDBNull(4) ? nullptr : reader->GetString(4);
                result->Gender = reader->IsDBNull(5) ? Nullable<bool>() : reader->GetBoolean(5);
                result->BirthDate = reader->IsDBNull(6) ? Nullable<DateTime>() : reader->GetDateTime(6);
                result->Area = reader->IsDBNull(7) ? nullptr : reader->GetString(7);
                result->Street = reader->IsDBNull(8) ? nullptr : reader->GetString(8);
                result->MaritalStatus = reader->IsDBNull(9) ? nullptr : reader->GetString(9);
                result->FatherStatus = reader->IsDBNull(10) ? Nullable<bool>() : reader->GetBoolean(10);
                result->MotherStatus = reader->IsDBNull(11) ? Nullable<bool>() : reader->GetBoolean(11);
                result->MaleChildren = reader->IsDBNull(12) ? Nullable<Byte>() : reader->GetByte(12);
                result->FemaleChildren = reader->IsDBNull(13) ? Nullable<Byte>() : reader->GetByte(13);
                result->IsActive = reader->IsDBNull(14) ? Nullable<bool>() : reader->GetBoolean(14);
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            System::Windows::Forms::MessageBox::Show("Error: " + ex->Message);
        }

        Disconnect(); // غلق الاتصال
        return result;
    }

    // Get all Cases
    static List<Cases^>^ GetAllCases()
    {
        Connect(); // فتح الاتصال

        String^ query = "SELECT * FROM Cases";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        List<Cases^>^ casesList = gcnew List<Cases^>();

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            while (reader->Read())
            {
                Cases^ c = gcnew Cases();

                c->ID = reader->IsDBNull(0) ? Nullable<int>() : reader->GetInt32(0);
                c->NationalID = reader->IsDBNull(1) ? nullptr : reader->GetString(1);
                c->FName = reader->IsDBNull(2) ? nullptr : reader->GetString(2);
                c->LName = reader->IsDBNull(3) ? nullptr : reader->GetString(3);
                c->NickName = reader->IsDBNull(4) ? nullptr : reader->GetString(4);
                c->Gender = reader->IsDBNull(5) ? Nullable<bool>() : reader->GetBoolean(5);
                c->BirthDate = reader->IsDBNull(6) ? Nullable<DateTime>() : reader->GetDateTime(6);
                c->Area = reader->IsDBNull(7) ? nullptr : reader->GetString(7);
                c->Street = reader->IsDBNull(8) ? nullptr : reader->GetString(8);
                c->MaritalStatus = reader->IsDBNull(9) ? nullptr : reader->GetString(9);
                c->FatherStatus = reader->IsDBNull(10) ? Nullable<bool>() : reader->GetBoolean(10);
                c->MotherStatus = reader->IsDBNull(11) ? Nullable<bool>() : reader->GetBoolean(11);
                c->MaleChildren = reader->IsDBNull(12) ? Nullable<Byte>() : reader->GetByte(12);
                c->FemaleChildren = reader->IsDBNull(13) ? Nullable<Byte>() : reader->GetByte(13);
                c->IsActive = reader->IsDBNull(14) ? Nullable<bool>() : reader->GetBoolean(14);

                casesList->Add(c); // إضافة الحالة إلى القائمة
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            System::Windows::Forms::MessageBox::Show("Error: " + ex->Message);
        }

        Disconnect(); // غلق الاتصال
        return casesList; // إرجاع قائمة الحالات
    }

    //Delete Cases
    static void DeleteCase(int id)
    {
        Connect(); // فتح الاتصال

        String^ query = "DELETE FROM Cases WHERE ID = @ID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        cmd->Parameters->AddWithValue("@ID", id);

        try
        {
            cmd->ExecuteNonQuery();  // تنفيذ الاستعلام
            
            
        }
        catch (Exception^ ex)
        {
            System::Windows::Forms::MessageBox::Show("حدث خطأ أثناء الحذف: " + ex->Message);
        }

        Disconnect(); // غلق الاتصال
    }

    //Search Cases
    static List<Cases^>^ SearchCases(Dictionary<String^, String^>^ searchFields)
    {
        List<Cases^>^ results = gcnew List<Cases^>();

        // الأعمدة المسموح بها لمنع SQL Injection
        array<String^>^ allowedColumns = { "NationalID", "FName", "LName", "NickName", "Gender", "Area", "Street", "MaritalStatus" };

        Connect(); // فتح الاتصال

        // بناء جملة WHERE ديناميكيًا
        List<String^>^ conditions = gcnew List<String^>();
        SqlCommand^ cmd = gcnew SqlCommand();
        cmd->Connection = sqlConn;

        for each(KeyValuePair<String^, String^> field in searchFields)
        {
            if (Array::IndexOf(allowedColumns, field.Key) != -1)
            {
                String^ paramName = "@param_" + field.Key;
                conditions->Add(field.Key + " LIKE " + paramName);
                cmd->Parameters->AddWithValue(paramName, "%" + field.Value + "%");
            }
            else
            {
                System::Windows::Forms::MessageBox::Show("العمود غير مسموح به: " + field.Key);
                Disconnect();
                return results;
            }
        }

        // إذا لا يوجد شروط، ارجع جميع البيانات
        String^ query = "SELECT * FROM Cases";
        if (conditions->Count > 0)
        {
            query += " WHERE " + String::Join(" AND ", conditions);
        }

        cmd->CommandText = query;

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            while (reader->Read())
            {
                Cases^ c = gcnew Cases();

                c->ID = reader->IsDBNull(0) ? Nullable<int>() : reader->GetInt32(0);
                c->NationalID = reader->IsDBNull(1) ? nullptr : reader->GetString(1);
                c->FName = reader->IsDBNull(2) ? nullptr : reader->GetString(2);
                c->LName = reader->IsDBNull(3) ? nullptr : reader->GetString(3);
                c->NickName = reader->IsDBNull(4) ? nullptr : reader->GetString(4);
                c->Gender = reader->IsDBNull(5) ? Nullable<bool>() : reader->GetBoolean(5);
                c->BirthDate = reader->IsDBNull(6) ? Nullable<DateTime>() : reader->GetDateTime(6);
                c->Area = reader->IsDBNull(7) ? nullptr : reader->GetString(7);
                c->Street = reader->IsDBNull(8) ? nullptr : reader->GetString(8);
                c->MaritalStatus = reader->IsDBNull(9) ? nullptr : reader->GetString(9);
                c->FatherStatus = reader->IsDBNull(10) ? Nullable<bool>() : reader->GetBoolean(10);
                c->MotherStatus = reader->IsDBNull(11) ? Nullable<bool>() : reader->GetBoolean(11);
                c->MaleChildren = reader->IsDBNull(12) ? Nullable<Byte>() : reader->GetByte(12);
                c->FemaleChildren = reader->IsDBNull(13) ? Nullable<Byte>() : reader->GetByte(13);
                c->IsActive = reader->IsDBNull(14) ? Nullable<bool>() : reader->GetBoolean(14);

                results->Add(c);
            }

            reader->Close();
        }
        catch (Exception^ ex)
        {
            System::Windows::Forms::MessageBox::Show("حدث خطأ أثناء البحث: " + ex->Message);
        }

        Disconnect();
        return results;
    }



};
