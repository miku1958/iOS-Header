//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNRoutePlanningDetails;

__attribute__((visibility("hidden")))
@interface MNNavigationStatePrepareGuidance : MNNavigationState
{
    MNRoutePlanningDetails *_routePlanningDetails;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void).cxx_destruct;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 routePlanningDetails:(id)arg2;
- (void)leaveState;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (BOOL)requiresHighMemoryThreshold;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopNavigation;
- (id)traceManager;
- (unsigned long long)type;

@end
