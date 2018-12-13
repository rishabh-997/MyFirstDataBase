package com.example.roshni.myfirstdatabase;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import javax.xml.transform.sax.SAXResult;

public class DataBaseHelper extends SQLiteOpenHelper
{
    private static final String DATABASE_NAME="Students.db";
    private static final String TABLE_NAME="student";
    private static final String COL_1="id";
    private static final String COL_2="name";
    private static final String COL_3="surname";
    private static final String COL_4="marks";

    public DataBaseHelper(Context context)
    {
        super(context, DATABASE_NAME, null, 1);
    }

    @Override
    public void onCreate(SQLiteDatabase db)
    {
        db.execSQL("CREATE TABLE "+TABLE_NAME+" (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT ,surname TEXT ,marks INTEGER)");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion)
    {
        db.execSQL("DROP TABLE IF EXISTS "+TABLE_NAME);
        onCreate(db);
    }

    public boolean insertdata(String name,String surname, String marks)
    {
        SQLiteDatabase db=this.getWritableDatabase();
        ContentValues value=new ContentValues();
        value.put(COL_2,name);
        value.put(COL_3,surname);
        value.put(COL_4,marks);
        long result=db.insert(TABLE_NAME,null,value);
        if(result==-1)
            return false;
        else
            return true;
    }

    public Cursor getAllData()
    {
        SQLiteDatabase db=this.getWritableDatabase();
        Cursor res=db.rawQuery("SELECT * FROM "+TABLE_NAME,null);
        return res;
    }
    public boolean update(String id, String name, String surname,String marks)
    {
        SQLiteDatabase db=this.getWritableDatabase();
        ContentValues value=new ContentValues();
        value.put(COL_1,id);
        value.put(COL_2,name);
        value.put(COL_3,surname);
        value.put(COL_4,marks);
        db.update(TABLE_NAME,value," ID = ?",new String []{id});
        return true;
    }
    public Integer delete(String id)
    {
        SQLiteDatabase db=this.getWritableDatabase();
        int x=db.delete(TABLE_NAME," ID = ?",new String[]{id});
        return x;
    }
}
