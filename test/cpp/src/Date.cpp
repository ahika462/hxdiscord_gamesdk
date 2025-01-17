// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0151d669b9b886e_26_new,"Date","new",0x9aa26240,"Date.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",26,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_30_getTime,"Date","getTime",0x0cac7da3,"Date.getTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",30,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_98_now,"Date","now",0x9aa26af6,"Date.now","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",98,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_105_fromTime,"Date","fromTime",0x44fd3cb7,"Date.fromTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",105,0x1bc6780a)

void Date_obj::__construct(int year,int month,int day,int hour,int min,int sec){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_26_new)
HXDLIN(  26)		this->mSeconds =  ::__hxcpp_new_date(year,month,day,hour,min,sec);
            	}

Dynamic Date_obj::__CreateEmpty() { return new Date_obj; }

void *Date_obj::_hx_vtable = 0;

Dynamic Date_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Date_obj > _hx_result = new Date_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Date_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x018f7872;
}

Float Date_obj::getTime(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_30_getTime)
HXDLIN(  30)		return (this->mSeconds * ((Float)1000.0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,getTime,return )

 ::Date Date_obj::now(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_98_now)
HXDLIN(  98)		return ::Date_obj::fromTime((( (Float)( ::__hxcpp_date_now()) ) * ((Float)1000.0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Date_obj,now,return )

 ::Date Date_obj::fromTime(Float t){
            	HX_GC_STACKFRAME(&_hx_pos_c0151d669b9b886e_105_fromTime)
HXLINE( 106)		 ::Date result =  ::Date_obj::__alloc( HX_CTX ,0,0,0,0,0,0);
HXLINE( 107)		result->mSeconds = (t * ((Float)0.001));
HXLINE( 108)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromTime,return )


Date_obj::Date_obj()
{
}

::hx::Val Date_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getTime") ) { return ::hx::Val( getTime_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { return ::hx::Val( mSeconds ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Date_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"now") ) { outValue = now_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromTime") ) { outValue = fromTime_dyn(); return true; }
	}
	return false;
}

::hx::Val Date_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { mSeconds=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Date_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mSeconds",92,75,59,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Date_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Date_obj,mSeconds),HX_("mSeconds",92,75,59,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Date_obj_sStaticStorageInfo = 0;
#endif

static ::String Date_obj_sMemberFields[] = {
	HX_("mSeconds",92,75,59,82),
	HX_("getTime",c3,7b,7f,1f),
	::String(null()) };

::hx::Class Date_obj::__mClass;

static ::String Date_obj_sStaticFields[] = {
	HX_("now",16,d9,53,00),
	HX_("fromTime",97,9a,c8,aa),
	::String(null())
};

void Date_obj::__register()
{
	Date_obj _hx_dummy;
	Date_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Date",4e,82,3c,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Date_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Date_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Date_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Date_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Date_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Date_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

