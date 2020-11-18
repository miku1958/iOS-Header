//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFAccessorySettingMobileTimerAdapter, HFHomePodAlarmItemModule;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemManager : HFItemManager
{
    id<HFMediaProfileContainer> _mediaProfileContainer;
    HFHomePodAlarmItemModule *_alarmItemModule;
}

@property (readonly, nonatomic) HFHomePodAlarmItemModule *alarmItemModule; // @synthesize alarmItemModule=_alarmItemModule;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property (readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)arg1 mediaProfileContainer:(id)arg2;

@end

