//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNLocation, NSDate, NSTimer;
@protocol MNTunnelLocationProjectorDelegate;

@interface MNTunnelLocationProjector : NSObject
{
    id<MNTunnelLocationProjectorDelegate> _delegate;
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    double _locationOverdueTimeoutForTunnel;
    double _locationOverdueTimeoutForNotTunnel;
    double _locationOverdueTimeoutForUnknown;
    BOOL _isProjecting;
}

@property (weak, nonatomic) id<MNTunnelLocationProjectorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL isProjecting; // @synthesize isProjecting=_isProjecting;

- (void).cxx_destruct;
- (double)_approximateMaxSpeedForRoad:(CDStruct_66740237 *)arg1;
- (BOOL)_locationIsGoodEnoughToEndProjection:(id)arg1;
- (double)_locationOverdueTimeoutForLocation:(id)arg1;
- (void)_locationUpdateOverdueTimerFired:(id)arg1;
- (id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2;
- (void)_resetLocationUpdateOverdueWithTimeout:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)stop;
- (void)updateLocation:(id)arg1;

@end

