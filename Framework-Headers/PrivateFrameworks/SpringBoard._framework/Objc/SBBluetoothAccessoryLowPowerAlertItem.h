//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem
{
    long long _batteryLevel;
    NSString *_accessoryName;
}

- (void).cxx_destruct;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2;
- (BOOL)wakeDisplay;

@end
