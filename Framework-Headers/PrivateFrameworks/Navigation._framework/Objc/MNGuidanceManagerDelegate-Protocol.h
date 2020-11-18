//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOStep, MNGuidanceManager, MNLocation, NSArray, NSString;

@protocol MNGuidanceManagerDelegate <NSObject>
- (void)guidanceManager:(MNGuidanceManager *)arg1 announce:(NSString *)arg2 shortPromptType:(unsigned long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(BOOL)arg5 completionBlock:(void (^)(int))arg6;
- (void)guidanceManager:(MNGuidanceManager *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
- (void)guidanceManager:(MNGuidanceManager *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(MNGuidanceManager *)arg1 updatePointOfInterest:(CDStruct_2c43369c)arg2 focusStyle:(int)arg3;
- (void)guidanceManager:(MNGuidanceManager *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManagerDidUpdateProgress:(MNGuidanceManager *)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerHasArrived:(MNGuidanceManager *)arg1 announce:(NSString *)arg2;
- (void)guidanceManagerHideSecondaryStep:(MNGuidanceManager *)arg1;
- (BOOL)guidanceManagerIsOffRoute:(MNGuidanceManager *)arg1 location:(MNLocation *)arg2 stepIndex:(unsigned long long)arg3;
- (void)guidanceManagerProceedingToRoute:(MNGuidanceManager *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
@end

