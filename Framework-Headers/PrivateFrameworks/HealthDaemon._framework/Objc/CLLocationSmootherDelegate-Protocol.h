//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/CLLocationManagerDelegateInternal-Protocol.h>

@class CLLocationSmoother, NSArray;

@protocol CLLocationSmootherDelegate <CLLocationManagerDelegateInternal>

@optional
- (void)locationManager:(CLLocationSmoother *)arg1 didSmoothLocations:(NSArray *)arg2 ofType:(int)arg3;
@end

