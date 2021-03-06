//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MNVehicleMonitorDelegate;

@interface MNVehicleMonitor : NSObject
{
    id<MNVehicleMonitorDelegate> _delegate;
    int _vehicleConnectedToken;
    int _vehicleDisconnectedToken;
    BOOL _isMonitoring;
}

@property (weak, nonatomic) id<MNVehicleMonitorDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)startMonitoring;
- (void)stopMonitoring;

@end

