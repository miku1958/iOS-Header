//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessoryProfile, NSMutableDictionary;
@protocol HFAccessorySettings;

@interface HFAccessorySettingAdapterManager : NSObject
{
    HMAccessoryProfile<HFAccessorySettings> *_accessoryProfile;
    NSMutableDictionary *_adaptersByID;
}

@property (readonly, weak, nonatomic) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
@property (readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;

- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1;

@end

