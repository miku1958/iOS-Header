//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumberFormatter, UILabel, _UIBatteryView;

@interface HACCBatteryView : UIView
{
    UILabel *_sideLabel;
    UILabel *_valueLabel;
    _UIBatteryView *_batteryView;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setValue:(double)arg1 forEar:(int)arg2;

@end

