//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface BSAbstractDefaultDomain : NSObject
{
    NSUserDefaults *_userDefaults;
    BOOL _boundDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableSet *_observerQueue_observers;
    NSMutableDictionary *_defaultKeyToDefaultValue;
}

+ (BOOL)__useDynamicMethodResolution;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_bindAndRegisterDefaults;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4;
- (id)_initWithDefaults:(id)arg1;
- (id)_initWithDomain:(id)arg1;
- (void)_setUserDefaults:(id)arg1;
- (id)_store;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)resetAllDefaults;
- (void)synchronizeDefaults;

@end
