//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNPrimitiveUserDefaults-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>
{
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CFString *)CFApplicationID;
- (void)dealloc;
- (id)initWithApplicationID:(id)arg1;
- (BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL *)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL *)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (void)setupAutosync;
- (BOOL)synchronize;

@end

