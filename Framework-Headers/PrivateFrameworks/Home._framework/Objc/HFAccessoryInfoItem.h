//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem
{
    HMAccessory *_accessory;
    unsigned long long _infoType;
}

@property (readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;

+ (id)localizedStringForCharacteristic:(id)arg1;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2;

@end
