// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#include "NJSRandomNumberGenerator.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::vector<uint8_t> NJSRandomNumberGenerator::getRandomBytes(int32_t size)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<Int32>(size);
    Local<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomBytes fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomBytes").ToLocalChecked()).ToLocalChecked();
    auto result_getRandomBytes = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,1,args);
    if(result_getRandomBytes.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomBytes call failed");
    }
    auto checkedResult_getRandomBytes = result_getRandomBytes.ToLocalChecked();
    if(!checkedResult_getRandomBytes->IsString())
    {
        Nan::ThrowError("checkedResult_getRandomBytes should be a hexadecimal string.");
    }
    std::vector<uint8_t> fResult_getRandomBytes;
    Nan::Utf8String str_fResult_getRandomBytes(checkedResult_getRandomBytes);
    std::string string_fResult_getRandomBytes(*str_fResult_getRandomBytes, str_fResult_getRandomBytes.length());
    if (string_fResult_getRandomBytes.rfind("0x", 0) == 0)
    {
        fResult_getRandomBytes = djinni::js::hex::toByteArray(string_fResult_getRandomBytes.substr(2));
    }
    else
    {
        fResult_getRandomBytes = std::vector<uint8_t>(string_fResult_getRandomBytes.cbegin(), string_fResult_getRandomBytes.cend());
    }

    return fResult_getRandomBytes;
}

int32_t NJSRandomNumberGenerator::getRandomInt()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomInt fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomInt").ToLocalChecked()).ToLocalChecked();
    auto result_getRandomInt = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_getRandomInt.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomInt call failed");
    }
    auto checkedResult_getRandomInt = result_getRandomInt.ToLocalChecked();
    auto fResult_getRandomInt = Nan::To<int32_t>(checkedResult_getRandomInt).FromJust();
    return fResult_getRandomInt;
}

int64_t NJSRandomNumberGenerator::getRandomLong()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomLong fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomLong").ToLocalChecked()).ToLocalChecked();
    auto result_getRandomLong = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_getRandomLong.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomLong call failed");
    }
    auto checkedResult_getRandomLong = result_getRandomLong.ToLocalChecked();
    auto fResult_getRandomLong = Nan::To<int64_t>(checkedResult_getRandomLong).FromJust();
    return fResult_getRandomLong;
}

int8_t NJSRandomNumberGenerator::getRandomByte()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomByte fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomByte").ToLocalChecked()).ToLocalChecked();
    auto result_getRandomByte = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_getRandomByte.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomByte call failed");
    }
    auto checkedResult_getRandomByte = result_getRandomByte.ToLocalChecked();
    auto fResult_getRandomByte = Nan::To<int32_t>(checkedResult_getRandomByte).FromJust();
    return fResult_getRandomByte;
}

NAN_METHOD(NJSRandomNumberGenerator::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSRandomNumberGenerator function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSRandomNumberGenerator::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSRandomNumberGenerator>(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked());
    djinni::js::ObjectWrapper<NJSRandomNumberGenerator>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSRandomNumberGenerator::RandomNumberGenerator_prototype;

Local<Object> NJSRandomNumberGenerator::wrap(const std::shared_ptr<ledger::core::api::RandomNumberGenerator> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(RandomNumberGenerator_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::RandomNumberGenerator>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSRandomNumberGenerator::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSRandomNumberGenerator::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSRandomNumberGenerator::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSRandomNumberGenerator").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    RandomNumberGenerator_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSRandomNumberGenerator").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
