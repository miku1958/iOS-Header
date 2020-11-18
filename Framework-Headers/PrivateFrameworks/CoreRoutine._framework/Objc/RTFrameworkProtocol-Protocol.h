//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/NSObject-Protocol.h>

@class CLVisit, NSArray, NSError, RTScenarioTrigger;

@protocol RTFrameworkProtocol <NSObject>
- (void)onLeechedVisit:(CLVisit *)arg1 withError:(NSError *)arg2;
- (void)onNextPredictedLocationsOfInterest:(NSArray *)arg1 withError:(NSError *)arg2;
- (void)onPredictedApplications:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onPredictedRooms:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onVehicleEvents:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onVisit:(CLVisit *)arg1 withError:(NSError *)arg2;
@end

