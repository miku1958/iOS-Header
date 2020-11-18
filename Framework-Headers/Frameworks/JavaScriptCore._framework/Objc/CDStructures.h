//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Atomic<unsigned char> {
    struct atomic<unsigned char> value;
};

struct AuxiliaryBarrier<JSC::Butterfly *> {
    struct Butterfly *_field1;
};

struct Butterfly;

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CallbackData {
    struct CallbackData *_field1;
    id _field2;
    id _field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSValue *_field5;
    unsigned long long _field6;
    struct OpaqueJSValue **_field7;
    id _field8;
};

struct HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>;

struct HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>;

struct JSCell;

struct JSLock;

struct JSObject {
    unsigned int _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    struct AuxiliaryBarrier<JSC::Butterfly *> _field6;
    unsigned int _field7;
};

struct JSValue {
    union EncodedValueDescriptor u;
};

struct Lock {
    struct Atomic<unsigned char> m_byte;
};

struct OpaqueJSClass {
    struct atomic<unsigned int> _field1;
    struct OpaqueJSClass *_field2;
    struct OpaqueJSClass *_field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    struct String _field15;
    struct unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>>> _field16;
    struct unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>>> _field17;
};

struct OpaqueJSValue;

struct RefPtr<JSC::JSLock, WTF::DumbPtrTraits<JSC::JSLock>> {
    struct JSLock *m_ptr;
};

struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>> {
    struct StringImpl *_field1;
};

struct String {
    struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>> _field1;
};

struct StringImpl;

struct Strong<JSC::JSObject> {
    struct JSValue *m_slot;
};

struct Weak<JSC::JSGlobalObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSString> {
    struct WeakImpl *m_impl;
};

struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>;

struct WeakImpl;

struct WeakValueRef {
    int m_tag;
    union WeakValueUnion u;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic<unsigned char> {
    _Atomic unsigned char __a_;
};

struct atomic<unsigned int> {
    _Atomic unsigned int _field1;
};

struct pair<JSC::JSObject *, JSC::JSObject *> {
    struct JSObject *_field1;
    struct JSObject *_field2;
};

struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> {
    struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>*, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> {
        struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>> *__value_;
    } __ptr_;
};

struct unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>>> {
    struct __compressed_pair<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>*, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>>>> {
        struct HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry>>>> *_field1;
    } _field1;
};

struct unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>>> {
    struct __compressed_pair<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>*, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>>>> {
        struct HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl>>>, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry>>>> *_field1;
    } _field1;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct pair<JSC::JSObject *, JSC::JSObject *> {
    struct JSObject *_field1;
    struct JSObject *_field2;
} pair_bfa3637f;

#pragma mark Named Unions

union EncodedValueDescriptor {
    long long asInt64;
    struct JSCell *ptr;
    struct {
        int payload;
        int tag;
    } asBits;
};

union WeakValueUnion {
    struct JSValue m_primitive;
    struct Weak<JSC::JSObject> m_object;
    struct Weak<JSC::JSString> m_string;
};

