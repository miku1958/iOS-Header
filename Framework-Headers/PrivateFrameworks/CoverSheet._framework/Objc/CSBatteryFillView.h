//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CSBatteryFillView : UIView
{
    long long _chargePercentage;
    long long _lowBatteryLevel;
    BOOL _isBatterySaverModeActive;
    BOOL _isInternalBattery;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isInternalBattery:(BOOL)arg2 lowBatteryLevel:(long long)arg3;
- (void)setBatterySaverModeActive:(BOOL)arg1;
- (void)setChargePercentage:(long long)arg1;

@end

