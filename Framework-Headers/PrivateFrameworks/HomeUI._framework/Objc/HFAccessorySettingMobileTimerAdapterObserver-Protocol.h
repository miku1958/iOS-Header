//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFAccessorySettingMobileTimerAdapter, NSArray;

@protocol HFAccessorySettingMobileTimerAdapterObserver <NSObject>

@optional
- (void)mobileTimerAdapter:(HFAccessorySettingMobileTimerAdapter *)arg1 didUpdateAlarms:(NSArray *)arg2;
- (void)mobileTimerAdapterDidUpdateReadiness:(HFAccessorySettingMobileTimerAdapter *)arg1;
@end

