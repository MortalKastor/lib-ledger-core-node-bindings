// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSEthereumLikeExtendedPublicKeyCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeExtendedPublicKey::derive) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::derive needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::derive : implementation of EthereumLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derive(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEthereumLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeExtendedPublicKey::derivePublicKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::derivePublicKey needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::derivePublicKey : implementation of EthereumLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derivePublicKey(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<String>("0x" + djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeExtendedPublicKey::deriveHash160) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::deriveHash160 needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::deriveHash160 : implementation of EthereumLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->deriveHash160(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<String>("0x" + djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeExtendedPublicKey::toBase58) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::toBase58 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::toBase58 : implementation of EthereumLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->toBase58();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeExtendedPublicKey::getRootPath) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::getRootPath needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::getRootPath : implementation of EthereumLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->getRootPath();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSEthereumLikeExtendedPublicKey::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeExtendedPublicKey function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeExtendedPublicKey::EthereumLikeExtendedPublicKey_prototype;

Local<Object> NJSEthereumLikeExtendedPublicKey::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeExtendedPublicKey> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeExtendedPublicKey_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeExtendedPublicKey::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEthereumLikeExtendedPublicKey::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeExtendedPublicKey>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeExtendedPublicKey::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeExtendedPublicKey::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeExtendedPublicKey").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"derive", derive);
    Nan::SetPrototypeMethod(func_template,"derivePublicKey", derivePublicKey);
    Nan::SetPrototypeMethod(func_template,"deriveHash160", deriveHash160);
    Nan::SetPrototypeMethod(func_template,"toBase58", toBase58);
    Nan::SetPrototypeMethod(func_template,"getRootPath", getRootPath);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EthereumLikeExtendedPublicKey_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSEthereumLikeExtendedPublicKey").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
