#pragma once
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

namespace sortspeedtest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::ComponentModel::IContainer^  components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	//private:
		//int button1WasClicked = false;

		void time(int MiliSecond)
		{
			/*
			int Second, Minute;
			int MSec = (MiliSecond) % 100;
			int temp = MiliSecond - MSec;
			int Sec = temp / 100;
			Second = Sec % 60;
			int Min = Sec - Second;
			Minute = Min / 60;
			Convert::ToString(MSec);
			Convert::ToString(Second);
			Convert::ToString(Minute);
			if (radioButton1->Checked == true)
			{
				label1->Text = Minute + ":" + Second + ":" + MSec;
			}
			if (radioButton2->Checked == true)
			{
				label2->Text = Minute + ":" + Second + ":" + MSec;
			}
			if (radioButton3->Checked == true)
			{
				label3->Text = Minute + ":" + Second + ":" + MSec;
			}
			if (radioButton4->Checked == true)
			{
				label4->Text = Minute + ":" + Second + ":" + MSec;
			}*/
			if (radioButton1->Checked == true)
			{
				label1->Text = System::Convert::ToString(MiliSecond / (double)CLOCKS_PER_SEC);
			}
			if (radioButton2->Checked == true)
			{
				label2->Text = System::Convert::ToString(MiliSecond / (double)CLOCKS_PER_SEC);
			}
			if (radioButton3->Checked == true)
			{
				label3->Text = System::Convert::ToString(MiliSecond / (double)CLOCKS_PER_SEC);
			}
			if (radioButton4->Checked == true)
			{
				label4->Text = System::Convert::ToString(MiliSecond / (double)CLOCKS_PER_SEC);
			}
		}

		void quicksort(int dizi[], int left, int right)
		{
			//int start = 0, stop = 0;
			//start = clock();
			int i = left, j = right;
			int tmp;
			int pivot = dizi[(left + right) / 2];
			while (i <= j){
				while (dizi[i] < pivot)
					i++;
				while (dizi[j] > pivot)
					j--;
				if (i <= j){
					tmp = dizi[i];
					dizi[i] = dizi[j];
					dizi[j] = tmp;
					i++;
					j--;
				}
			}
			if (left < j)
				quicksort(dizi, left, j);
			if (i < right)
				quicksort(dizi, i, right);
			//stop = clock();
			//time((clock() - start));
		}

		void partition(int arr[], int low, int high)
		{
			//int start = 0, stop = 0;
			//start = clock();
			int mid;
			if (low<high){
				mid = (low + high) / 2;
				partition(arr, low, mid);
				partition(arr, mid + 1, high);
				mergeSort(arr, low, mid, high);
			}
			//stop = clock();
			//time((clock() - start));
		}

		void mergeSort(int arr[], int low, int mid, int high){

			int i, m, k, l, temp[100000];

			l = low;
			i = low;
			m = mid + 1;

			while ((l <= mid) && (m <= high)){

				if (arr[l] <= arr[m]){
					temp[i] = arr[l];
					l++;
				}
				else{
					temp[i] = arr[m];
					m++;
				}
				i++;
			}

			if (l>mid){
				for (k = m; k <= high; k++){
					temp[i] = arr[k];
					i++;
				}
			}
			else{
				for (k = l; k <= mid; k++){
					temp[i] = arr[k];
					i++;
				}
			}

			for (k = low; k <= high; k++){
				arr[k] = temp[k];
			}
		}

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Array";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(155, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(155, 129);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 147);
			this->listBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(465, 129);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 147);
			this->listBox2->TabIndex = 7;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(631, 129);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(91, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Selection Sort";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(631, 174);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 17);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Insert Sort";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(631, 213);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(75, 17);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Quick Sort";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(631, 259);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(77, 17);
			this->radioButton4->TabIndex = 11;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Merge Sort";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(485, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 32);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(485, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 32);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(821, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"0:0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(821, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"0:0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(821, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"0:0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(821, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"0:0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(173, 91);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 32);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(786, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 32);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Time Reset";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(898, 334);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			int a = System::Convert::ToInt32(textBox1->Text);
			for (int i = 0; i < a; i++)
			{
				int num = rand() % a;
				listBox1->Items->Add(num);
			}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = System::Convert::ToInt32(textBox1->Text);
	int arr[100000];
	for (int k = 0; k < a; k++)
	{
		arr[k] = System::Convert::ToInt32(listBox1->Items[k]);
		//listBox2->Items->Add(arr[k]);
	}
	clock_t start = 0, stop = 0;
	if (radioButton1->Checked == true)
	{
		start = clock();
		int j, temp;
		for (int i = 0; i < a; i++)
		{
			for (int j = i + 1; j < a; j++)
			{
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		//stop = clock();
		for (int l = 0; l < a; l++)
		{
			listBox2->Items->Add(arr[l]);
		}
		time((clock() - start));
	}
	else if (radioButton2->Checked == true)
	{
		start = clock();
		int j,temp;
		for (int i = 1; i<a; i++)
		{
			temp = arr[i];
			j = i - 1;
			while ((temp<arr[j]) && (j >= 0)){
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = temp;
		}
		//stop = clock();
		for (int l = 0; l < a; l++)
		{
			listBox2->Items->Add(arr[l]);
		}
		time(clock() - start);
	}
	else if (radioButton3->Checked == true)
	{
		start = clock();
		quicksort(arr, 0, a-1);
		for (int i = 0; i < a; i++)
		{
			listBox2->Items->Add(arr[i]);
		}
		time(clock() - start);
	}
	else if (radioButton4->Checked == true)
	{
		start = clock();
		partition(arr, 0, a - 1);
		for (int i = 0; i < a; i++)
		{
			listBox2->Items->Add(arr[i]);
		}
		time(clock() - start);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox2->Items->Clear();
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = "0:0";
	label2->Text = "0:0";
	label3->Text = "0:0";
	label4->Text = "0:0";
}
};
}
