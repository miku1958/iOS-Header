//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CLLocation, CLRegion;

@protocol HMDLocationDelegate <NSObject>

@optional
- (void)didDetermineLocation:(CLLocation *)arg1;
- (void)didDetermineState:(long long)arg1 forRegion:(CLRegion *)arg2;
- (void)didEnterRegion:(CLRegion *)arg1;
- (void)didExitRegion:(CLRegion *)arg1;
@end

