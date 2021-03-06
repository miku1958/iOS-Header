//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BatteryCenterUI/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol UIViewControllerTransitionCoordinator;

@protocol BCUIBatteryDeviceDisplaying <NSObject>

@property (nonatomic, getter=isCharging) BOOL charging;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (strong, nonatomic) UIImage *glyph;
@property (nonatomic, getter=isLowCharge) BOOL lowCharge;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long percentCharge;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;


@optional
@end

