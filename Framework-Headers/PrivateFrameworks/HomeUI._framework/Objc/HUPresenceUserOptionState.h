//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUPresenceUserOptionState : NSObject
{
    BOOL _selected;
    BOOL _locationAvailable;
    unsigned long long _activationGranularity;
}

@property (readonly, nonatomic) unsigned long long activationGranularity; // @synthesize activationGranularity=_activationGranularity;
@property (readonly, nonatomic, getter=isLocationAvailable) BOOL locationAvailable; // @synthesize locationAvailable=_locationAvailable;
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;

- (id)init;
- (id)initWithActivationGranularity:(unsigned long long)arg1 selected:(BOOL)arg2 locationAvailable:(BOOL)arg3;

@end

