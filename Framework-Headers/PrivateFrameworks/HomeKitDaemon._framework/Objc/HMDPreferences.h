//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMFClassRegistry, NSArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDPreferences : HMFObject <HMFObject>
{
    NSMutableDictionary *_preferences;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFClassRegistry *_classRegistry;
}

@property (readonly) HMFClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;

+ (id)classRegistry;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (id)defaultValues;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (id)sharedPreferences;
- (void).cxx_destruct;
- (void)addPreference:(id)arg1;
- (id)init;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
- (id)preferenceForKey:(id)arg1;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;

@end
