//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFAccessorySettingAdapter, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject
{
    HFAccessorySettingManagedConfigurationAdapter *_managedConfigurationAdapter;
    HFAccessorySettingSiriLanguageAdapter *_siriLanguageAdapter;
    HFAccessorySettingAdapter *_mobileTimerAdapter;
}

@property (readonly, nonatomic) NSSet *allAdapters;
@property (strong, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter; // @synthesize managedConfigurationAdapter=_managedConfigurationAdapter;
@property (strong, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter; // @synthesize mobileTimerAdapter=_mobileTimerAdapter;
@property (strong, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter; // @synthesize siriLanguageAdapter=_siriLanguageAdapter;

- (void).cxx_destruct;

@end

