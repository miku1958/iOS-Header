//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol ATXLocationManagerGPS;

@protocol ATXLocationManagerGPSDelegate
- (void)didChangeLocationEnabled:(BOOL)arg1;
- (void)didChangePreciseLocationEnabled:(BOOL)arg1;
- (void)locationManagerGPS:(id<ATXLocationManagerGPS>)arg1 didEnterRegionWithIdentifier:(NSString *)arg2;
- (void)locationManagerGPS:(id<ATXLocationManagerGPS>)arg1 didExitRegionWithIdentifier:(NSString *)arg2;
@end

