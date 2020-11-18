//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/VGVirtualGarageObserver-Protocol.h>

@class NSDate, NSMeasurement, NSTimer;
@protocol MNEVChargingStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface MNEVChargingStateMonitor : NSObject <VGVirtualGarageObserver>
{
    id<MNEVChargingStateMonitorDelegate> _delegate;
    BOOL _shouldShowChargingInfo;
    NSDate *_startDate;
    NSTimer *_timer;
    NSMeasurement *_targetBatteryCharge;
}

@property (weak, nonatomic) id<MNEVChargingStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSMeasurement *targetBatteryCharge; // @synthesize targetBatteryCharge=_targetBatteryCharge;

- (void).cxx_destruct;
- (void)_consumeUpdatedVirtualGarage:(id)arg1 forceDelegateCallback:(BOOL)arg2;
- (void)_notifyShouldShowChargingInfo;
- (void)_startTimer;
- (void)dealloc;
- (id)initWithTargetBatteryCharge:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)virtualGarageDidUpdate:(id)arg1;

@end
