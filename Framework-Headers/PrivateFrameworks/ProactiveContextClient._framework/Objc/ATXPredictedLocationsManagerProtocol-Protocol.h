//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSString;

@protocol ATXPredictedLocationsManagerProtocol
- (NSArray *)getPredictedExitTimesFromLOIName:(NSString *)arg1 startDate:(NSDate *)arg2;
- (NSArray *)getPredictedLocationsOfInterestFromLOIName:(NSString *)arg1 startDate:(NSDate *)arg2;
- (NSArray *)predictedExitTimes;
- (NSArray *)predictedLocationsOfInterest;
@end

