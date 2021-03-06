//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Proximity/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, PRBeaconListener;

@protocol PRBeaconListenerDelegate <NSObject>
- (void)beaconListener:(PRBeaconListener *)arg1 didChangeState:(unsigned long long)arg2;
- (void)beaconListener:(PRBeaconListener *)arg1 didFailWithError:(NSError *)arg2;

@optional
- (void)beaconListener:(PRBeaconListener *)arg1 didOutputRangeResults:(NSArray *)arg2;
- (void)beaconListener:(PRBeaconListener *)arg1 didOutputSuperframeStats:(NSDictionary *)arg2;
@end

