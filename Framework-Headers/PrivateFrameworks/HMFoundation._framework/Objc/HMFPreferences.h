//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class HMFClassRegistry, HMFUnfairLock, NSArray, NSMutableDictionary, NSString;

@interface HMFPreferences : HMFObject <HMFObject>
{
    NSMutableDictionary *_preferences;
    HMFUnfairLock *_lock;
    HMFClassRegistry *_classRegistry;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) HMFClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)classRegistry;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (id)defaultValues;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (id)sharedPreferences;
- (void).cxx_destruct;
- (id)init;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
- (id)preferenceForKey:(id)arg1;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;

@end

