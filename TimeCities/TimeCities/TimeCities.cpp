#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

	setlocale(0, "");
	cout << "((1)Калининград, (2)Москва, (3)Санкт-Петербург, (4)Нижний Новгород, (5)Казань, (6)Ростов-на-Дону, (7)Воронеж, (8)Краснодар, (9)Саратов, (10)Ярославль, (11)Махачкала, (12)Рязань, (13)Набережные Челны, (14)Пенза, (15)Липецк, (16)Киров, (17)Чебоксары, (18)Тула, (19)Курск, (20)Ставрополь, (21)Сочи, (22)Тверь, (23)Иваново, (24)Брянск, (25)Белгород, (26)Владимир, (27)Архангельск, (28)Калуга, (29)Смоленск, (30)Череповец, (31)Саранск, (32)Орёл, (33)Вологда, (34)Владикавказ, (35)Грозный, (36)Мурманск, (37)Тамбов, (38)Петрозаводск, (39)Кострома, (40)Новороссийск, (41)Йошкар-Ола, (42)Таганрог, (43)Сыктывкар, (44)Нальчик, (45)Нижнекамск, (46)Шахты, (47)Дзержинск, (48)Старый Оскол, (49)Великий Новгород, (50)Псков, (51)Минеральные, (52)Севастополь, (53)Симферопль, (54)Самара, (55)Волгоград, (56)Тольятти, (57)Ижевск, (58)Ульяновск, (59)Астрахань, (60)Екатеринбург, (61)Челябинск, (62)Уфа, (63)Пермь, (64)Тюмень, (65)Оренбург, (66)Магнитогорск, (67)Сургут, (68)Нижний Тагил, (69)Курган, (70)Стерлитамак, (71)Нижневартовск, (72)Орск, (73)Омск, (74)Новосибирск, (75)Красноярск, (76)Барнаул, (77)Томск, (78)Кемерово, (79)Новокузнецк, (80)Бийск, (81)Прокопьевск, (82)Норильск, (83)Иркутск, (84)Улан-Удэ, (85)Братск, (86)Ангарск, (87)Чита, (88)Якутск, (89)Благовещенск, (90)Хабаровск, (91)Владивосток, (92)Комсомольск-на-Амуре)";
	double num;
	cout << "------------";
	cout << "-----------------";
	cout << "Введите интерисующий номер города из списка: ";
	cin >> num;
	SYSTEMTIME  st, msk, sam, kal, ekb, omsk, ksr, irk, ysk, vdlk;
	FILETIME ft, sm, kl, ek, oms, ks, ir, ya, vl;
	ULARGE_INTEGER i;
	TIME_ZONE_INFORMATION tz, sz, kz, eb, om, ksrn, irku, yak, vld;
	// Местное время
	GetLocalTime(&st);
	printf("Ваше время:""%d:%d\n", st.wHour, st.wMinute);
	if (num > 1)
	{
		if (num < 54)
		{
			SystemTimeToFileTime(&st, &ft);
			i.LowPart = ft.dwLowDateTime;
			i.HighPart = ft.dwHighDateTime;
			GetTimeZoneInformation(&tz);
			LONGLONG d = tz.Bias * 60 * 10000000ull + 3 * 3600 * 10000000ull;
			i.QuadPart += d;
			ft.dwLowDateTime = i.LowPart;
			ft.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&ft, &msk);
			// Московское время
			cout << printf("Время выбранного города(Московсое): ""%d:%d\n", msk.wHour, msk.wMinute) << endl;
		}
	}
	if (num > 53)
	{
		if (num < 60)
		{
			// Самарское время
			SystemTimeToFileTime(&st, &sm);
			i.LowPart = sm.dwLowDateTime;
			i.HighPart = sm.dwHighDateTime;
			GetTimeZoneInformation(&sz);
			LONGLONG s = sz.Bias * 60 * 10000000ull + 4 * 3600 * 10000000ull;
			i.QuadPart += s;
			sm.dwLowDateTime = i.LowPart;
			sm.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&sm, &sam);
			cout << printf("Время выбранного города(Самарское): ""%d:%d\n", sam.wHour, sam.wMinute) << endl;
		}
	}
	if (num == 1)
	{
		// Калининградское время
		SystemTimeToFileTime(&st, &kl);
		i.LowPart = kl.dwLowDateTime;
		i.HighPart = kl.dwHighDateTime;
		GetTimeZoneInformation(&kz);
		LONGLONG k = kz.Bias * 60 * 10000000ull + 2 * 3600 * 10000000ull;
		i.QuadPart += k;
		kl.dwLowDateTime = i.LowPart;
		kl.dwHighDateTime = i.HighPart;
		FileTimeToSystemTime(&kl, &kal);
		cout << printf("Время выбранного города(Калининградское): ""%d:%d\n", kal.wHour, kal.wMinute) << endl;
	}
	if (num > 59)
	{
		if (num < 73)
		{
			// Екатеринбургское время
			SystemTimeToFileTime(&st, &ek);
			i.LowPart = ek.dwLowDateTime;
			i.HighPart = ek.dwHighDateTime;
			GetTimeZoneInformation(&eb);
			LONGLONG e = eb.Bias * 60 * 10000000ull + 5 * 3600 * 10000000ull;
			i.QuadPart += e;
			ek.dwLowDateTime = i.LowPart;
			ek.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&ek, &ekb);
			cout << printf("Время выбранного города(Екатеринбургское): ""%d:%d\n", ekb.wHour, ekb.wMinute) << endl;
		}
	}
	if (num == 73)
	{
		// Омское время
		SystemTimeToFileTime(&st, &oms);
		i.LowPart = oms.dwLowDateTime;
		i.HighPart = oms.dwHighDateTime;
		GetTimeZoneInformation(&om);
		LONGLONG o = om.Bias * 60 * 10000000ull + 6 * 3600 * 10000000ull;
		i.QuadPart += o;
		oms.dwLowDateTime = i.LowPart;
		oms.dwHighDateTime = i.HighPart;
		FileTimeToSystemTime(&oms, &omsk);
		cout << printf("Время выбранного города(Омское): ""%d:%d\n", omsk.wHour, omsk.wMinute) << endl;
	}
	if (num > 73)
	{
		if (num < 83)
		{
			// Красноярское время
			SystemTimeToFileTime(&st, &ks);
			i.LowPart = ks.dwLowDateTime;
			i.HighPart = ks.dwHighDateTime;
			GetTimeZoneInformation(&ksrn);
			LONGLONG r = ksrn.Bias * 60 * 10000000ull + 7 * 3600 * 10000000ull;
			i.QuadPart += r;
			ks.dwLowDateTime = i.LowPart;
			ks.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&ks, &ksr);
			cout << printf("Время выбранного города(Красноярское): ""%d:%d\n", ksr.wHour, ksr.wMinute);
		}
	}
	if (num > 82)
	{   
		if (num < 87)
		{
			// Иркутское время
			SystemTimeToFileTime(&st, &ir);
			i.LowPart = ir.dwLowDateTime;
			i.HighPart = ir.dwHighDateTime;
			GetTimeZoneInformation(&irku);
			LONGLONG u = irku.Bias * 60 * 10000000ull + 8 * 3600 * 10000000ull;
			i.QuadPart += u;
			ir.dwLowDateTime = i.LowPart;
			ir.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&ir, &irk);
			cout << printf("Время выбранного города(Иркутское): ""%d:%d\n", irk.wHour, irk.wMinute) << endl;
		}
	}
	if (num > 86)
	{   
		if (num < 90)
		{
			// Якутское время
			SystemTimeToFileTime(&st, &ya);
			i.LowPart = ya.dwLowDateTime;
			i.HighPart = ya.dwHighDateTime;
			GetTimeZoneInformation(&yak);
			LONGLONG y = yak.Bias * 60 * 10000000ull + 9 * 3600 * 10000000ull;
			i.QuadPart += y;
			ya.dwLowDateTime = i.LowPart;
			ya.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&ya, &ysk);
			cout << printf("Время выбранного города(Якутское): ""%d:%d\n", ysk.wHour, ysk.wMinute);
		}
		}
	if (num > 89)
	{   
		if (num < 93)
		{
			// Владивостокское время
			SystemTimeToFileTime(&st, &vl);
			i.LowPart = vl.dwLowDateTime;
			i.HighPart = vl.dwHighDateTime;
			GetTimeZoneInformation(&vld);
			LONGLONG v = vld.Bias * 60 * 10000000ull + 10 * 3600 * 10000000ull;
			i.QuadPart += v;
			vl.dwLowDateTime = i.LowPart;
			vl.dwHighDateTime = i.HighPart;
			FileTimeToSystemTime(&vl, &vdlk);
			cout << printf("Время выбранного города(Приморский край): ""%d:%d\n", vdlk.wHour, vdlk.wMinute) << endl;
		}
	}
		system("pause");

	return 0;
}
