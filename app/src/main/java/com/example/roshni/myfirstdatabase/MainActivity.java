package com.example.roshni.myfirstdatabase;

import android.database.Cursor;
import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    DataBaseHelper myDb;
    EditText e1, e2, e3,e4;
    Button btnadd, btnview,btnupdate,btndelete;
    TextView text;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        myDb = new DataBaseHelper(this);
        e1 = (EditText) findViewById(R.id.name);
        e2 = (EditText) findViewById(R.id.surname);
        e3 = (EditText) findViewById(R.id.marks);
        e4 = (EditText) findViewById(R.id.id);
        btnadd = (Button) findViewById(R.id.add);
        btnview = (Button) findViewById(R.id.view);
        btnupdate =(Button)findViewById(R.id.update);
        btndelete=(Button)findViewById(R.id.delete);
        text = (TextView) findViewById(R.id.check);
    }

    public void AddData(View view) {
        String s1 = e1.getText().toString();
        String s2 = e2.getText().toString();
        String s3 = e3.getText().toString();
        boolean insert = myDb.insertdata(s1, s2, s3);
        if (insert)
            text.setText("Successful");
        else
            text.setText("Failure");
        e1.setText("");
        e2.setText("");
        e3.setText("");
    }

    public void ViewData(View view)
    {
        Cursor res = myDb.getAllData();
        if (res.getCount() == 0)
        {
            //show error message;
            showmessgae("ERROR","Nothing found");
            return;
        }
        StringBuffer buffer = new StringBuffer();
        while (res.moveToNext())
        {
            buffer.append("ID : "+res.getString(0)+"\n");
            buffer.append("Name : "+res.getString(1)+"\n");
            buffer.append("SurName : "+res.getString(2)+"\n");
            buffer.append("Marks : "+res.getString(3)+"\n\n");
        }
        //show all data
        showmessgae("DATA",buffer.toString());
    }

    public void UpdateData(View view)
    {
        String s0 = e4.getText().toString();
        String s1 = e1.getText().toString();
        String s2 = e2.getText().toString();
        String s3 = e3.getText().toString();
        boolean isupdate=myDb.update(s0,s1,s2,s3);
        if(isupdate)
            text.setText("updated");
        else
            text.setText("Error Updating");
    }

    public void DeleteData(View view)
    {
        String s=e4.getText().toString();
        int isdelete=myDb.delete(s);
        if(isdelete>0)
            text.setText("Deleted");
        else
            text.setText("error Deleting");
    }

    public void showmessgae(String title,String message)
    {
        AlertDialog.Builder builder=new AlertDialog.Builder(this);
        builder.setCancelable(true);
        builder.setTitle(title);
        builder.setMessage(message);
        builder.show();
    }

}