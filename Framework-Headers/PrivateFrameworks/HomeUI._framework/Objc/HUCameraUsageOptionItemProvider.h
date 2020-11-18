//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraUsageOptionItemProvider : HFItemProvider
{
    NSMutableSet *_items;
    unsigned long long _presenceEventType;
    unsigned long long _displayStyle;
    NSSet *_cameraProfiles;
}

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property (readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property (readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property (readonly, nonatomic) unsigned long long presenceEventType; // @synthesize presenceEventType=_presenceEventType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresenceEventType:(unsigned long long)arg1 cameraProfiles:(id)arg2;
- (id)invalidationReasons;
- (id)reloadItems;

@end
