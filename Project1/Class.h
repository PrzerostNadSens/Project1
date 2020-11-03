#pragma once
#include<stdio.h>
#include<string.h>
#include <cstring>
#include<iostream>
#include<cstdlib>
#include <vector>

using namespace System;

using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Class
{


public:

	String^ klucz_String;
	String^ tekst_String;
	String^ tekst_String2;
	String^ ztekst_String2;
	String^ ztekst_String;
	void setarg3(String^ klucz) { klucz_String = klucz; }
	void setarg2(String^ klucz) { ztekst_String2 = klucz; }
	void setarg1(String^ tekst) { tekst_String = tekst; }
	void setarg4(String^ klucz) { tekst_String2 = klucz; }
	void setarg5(String^ tekst) { ztekst_String = tekst; }
	int k = 0;

	void szyfr(int index, int r, int klen, std::vector<char>& ztekst, std::vector<std::vector<char>> tab)
	{
		int j;
		for (j = 0; j <= r; j++)
		{

			ztekst.push_back(tab[j][index]);
			

			if (index == 0)
				index = 8;
			else
				index--;
		}
	}

	std::vector<std::vector<char>> tablica(int index, int r, int klen, std::vector<std::vector<char>> dta, std::vector<char> &temp2)
	{
		int j;
		std::vector<std::vector<char>> dtab = dta;

		for (j = 0; j < r; j++)
		{
			dtab[j][index] = temp2[0];
			temp2.erase(temp2.begin());
			

			if (index == 0)
				index = klen - 1;
			else
				index--;
		}return dtab;
		
	}
	void odczyt(std::vector<std::vector<char>> dtab, std::vector<char> &odcz)
	{
	
		for (int i = 0; i < dtab.size(); i++)
		{
			for (int j = 0; j < dtab[i].size(); j++)
				odcz.push_back( dtab[i][j]);
		
		
		}

	}
	int min(std::vector<char>& temp)
	{
		int  j, min, index;

		min = temp[0];
		index = 0;
		for (j = 0; j < temp.size(); j++)
		{
			if (temp[j] < min)
			{
				min = temp[j];
				index = j;
			}
		}

		temp[index] = 123;
		return (index);
	}

	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	void main_Clasa()
	{
		std::string klucz_string1;
		std::string tekst_string1;
		MarshalString(klucz_String, klucz_string1);
		MarshalString(tekst_String, tekst_string1);
	
		std::vector<char>klucz(klucz_string1.begin(), klucz_string1.end());
		std::vector<char>temp;
		std::vector<char>ztekst;
	
		std::vector<char>tekst(tekst_string1.begin(), tekst_string1.end());

		std::vector<std::vector<char>> tab;



		int klen, flag = 0;
		int  c, index;

		temp = klucz;
		klen = klucz.size();
		//dopisywanie na koncu
		int k = 0;
		int r = ceil(tekst.size() / klucz.size());

		for (int i = 0; i <= r; i++)
		{
			std::vector<char> vec;

			for (int j = 0; j < klucz.size(); j++)
			{
				if (k < tekst.size())
				{
					vec.push_back(tekst[k++]);
				}
				else
					vec.push_back(' ');
			}
			tab.push_back(vec);
		}
		
		for (int i = 0; i < klen; i++)
		{
			//std::cout << " " << i << " ";
			index = min(temp);
			szyfr(index, r, klen, ztekst, tab);
		}
		
		std::string s(ztekst.begin(), ztekst.end());
		String^ str2 = gcnew String(s.c_str());
		ztekst_String = str2;
	}
	
	void main_odszyfrowanie()
	{
		
		std::string ztekst_string;
		std::string klucz_string;
		MarshalString(klucz_String, klucz_string);
		
		MarshalString(ztekst_String2, ztekst_string);
		std::vector<char>klucz(klucz_string.begin(), klucz_string.end());
		std::vector<char>temp;
		std::vector<char>ztekst(ztekst_string.begin(), ztekst_string.end());
		std::vector<char>temp2;
		std::vector<std::vector<char>> dtab;
		
		
		int i, j, klen, emlen, flag = 0;
		int index, szereg;
		//odszyfrowanie

		emlen = ztekst.size();
		int r = ceil(ztekst.size() / klucz.size());
		
		for (int i = 0; i <= r; i++)
		{
			std::vector<char> vec;

			for (int j = 0; j < klucz.size(); j++)
			{
				if (k < ztekst.size())
				{
					vec.push_back(ztekst[k++]);
				}

			}
			dtab.push_back(vec);
		}
		
		
		temp = klucz;
		std::cout <<"to jestr: "<< ceil(ztekst.size() / klucz.size())<< std::endl;
		r =  ceil(ztekst.size() / klucz.size());
		
		j = 0;
		std::vector<char>kopia = ztekst;
		
		std::cout << " " << klucz_string;
		std::cout << std::endl;
		for (int i = 0; i < klucz.size(); i++)
		{
		
			index = min(temp);
			dtab = tablica(index, r, klucz.size(),dtab, kopia );
			
		}
		
		std::vector<char> odcz;
		odczyt(dtab, odcz);
		
		std::string s(odcz.begin(), odcz.end());
		String^ str1 = gcnew String(s.c_str());
		tekst_String2 = str1;
		
	}


};



