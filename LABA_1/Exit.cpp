#include "Exit.h"

SetAuto DeleteSetAuto(SetAuto Auto)//удаление авто
{
	Exit Delete;
	Auto.brand = Delete.null;
	Auto.series = Delete.null;
	Auto.numberAuto = Delete.null;
	Auto.CarBody = Delete.noll;
	return Auto;
}

CarOwner DeleteCarOwner(CarOwner Owner)//удаление владельца
{
	Exit Delete;
	Owner.Name = Delete.null;
	Owner.Surname = Delete.null;
	Owner.phonNumber = Delete.null;
	return Owner;
}

CarInfo DeleteCarInfo(CarInfo Info)//удаление доп инфы
{
	Exit Delete;
	Info.color = Delete.noll;
	Info.carCondition = Delete.noll;
	Info.DTP = Delete.noll;
	return Info;
}

CarPrice DeleteCarPrice(CarPrice Price)//удаление цены
{
	Exit Delete;
	Price.price = Delete.null;
	return Price;
}
