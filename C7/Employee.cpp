//---------------------------------------------------------------------------

#pragma hdrstop
#include<Dateutils.hpp>

#include "Employee.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void list :: AddNode(emp value)
{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		if(head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
}

void list :: GetNode(TMemo*Memo)
{
	Memo->Lines->Clear();
	node *temp;
	temp = head;
	while(temp != NULL)
	{
		Memo->Lines->Add("Имя: " + temp->data.Name);
		Memo->Lines->Add("Дата рождения: " + temp->data.Birthday);
		Memo->Lines->Add("Паспорт: " + temp->data.Passport);
		Memo->Lines->Add("Страховка: " + temp->data.Insurance);
		Memo->Lines->Add("Образование: " + temp->data.Education);
		Memo->Lines->Add("Должность: " + temp->data.Post);
		Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
		Memo->Lines->Add("Дата приема: " + temp->data.Hiring);
		Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		Memo->Lines->Add("");
		temp = temp->next;
	}
}

void list :: DeleteElement(TComboBox*ComboBox, TMemo*Memo)
{
	bool c = false;
	if(ComboBox->ItemIndex == 0)
	{
		node *temp;
		temp = head;
		head = head->next;
		ComboBox->Items->Delete(0);
		Memo->Lines->Add("Модель уволена.");
		delete temp;
	}
	else{
		node *current;
		node *previous;
		current = head;

		if (current != NULL && !current->data.Name.Compare(ComboBox->Text))
		{
			current = current->next;
		}
		else
		{
			while (current != NULL && current->data.Name.Compare(ComboBox->Text)){
				previous = current;
				current = current->next;
				c = true;
			}
		}

		if(c)
		{
			Memo->Lines->Add("Модель уволена.");
			ComboBox->Items->Delete(ComboBox->ItemIndex);
		}

		previous->next = current->next;
	}
}

void list :: Elder(TComboBox*ComboBox, TMemo*Memo)
{
	node *temp = head;
	while(temp != NULL)
	{
		if(21 - (10*(temp->data.Birthday[8] - 48) + temp->data.Birthday[9] - 48) <= -29 )
		{
			ComboBox->Items->Add(temp->data.Name);
		}
		temp = temp->next;
	}
}

void list :: FindName(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Name)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindBirthday(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Birthday)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindPassport(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Passport)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindInsurance(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Insurance)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindEducation(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Education)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindPost(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Post)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindSalary(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Salary)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

void list :: FindHiring(TEdit*Edit, TMemo*Memo)
{
	bool c = false;
	Memo->Lines->Clear();
	node *temp = head;
	while(temp != NULL)
	{
		if(!(Edit->Text.Compare(temp->data.Hiring)))
		{
			c = true;
			Memo->Lines->Add("Имя: " + temp->data.Name);
			Memo->Lines->Add("Дата: " + temp->data.Birthday);
			Memo->Lines->Add("Паспорт: " + temp->data.Passport);
			Memo->Lines->Add("Страховка: " + temp->data.Insurance);
			Memo->Lines->Add("Обрзование: " + temp->data.Education);
			Memo->Lines->Add("Должность: " + temp->data.Post);
			Memo->Lines->Add("Зарплата: " + IntToStr(temp->data.Salary));
			Memo->Lines->Add("Прием: " + temp->data.Hiring);
			Memo->Lines->Add("Комментарий: " + temp->data.Notes);
		}
		temp = temp->next;
	}

	if(temp == NULL && !c)
		Memo->Lines->Add("Модель не найдена.");
}

