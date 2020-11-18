//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSValue, NSMapTable;

@interface JSManagedValue : NSObject
{
    struct Weak<JSC::JSGlobalObject> m_globalObject;
    struct RefPtr<JSC::JSLock> m_lock;
    struct WeakValueRef m_weakValue;
    NSMapTable *m_owners;
}

@property (readonly) JSValue *value;

+ (id)managedValueWithValue:(id)arg1;
+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddOwner:(id)arg1;
- (void)didRemoveOwner:(id)arg1;
- (void)disconnectValue;
- (id)init;
- (id)initWithValue:(id)arg1;

@end

