//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNNavigationStateCommute.h>

__attribute__((visibility("hidden")))
@interface MNNavigationStateForegroundPredictingDestination : MNNavigationStateCommute
{
}

- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;
- (unsigned long long)desiredCommuteSessionState;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (BOOL)requiresHighMemoryThreshold;
- (void)stopPredictingDestinations;
- (long long)type;
- (void)updateMapsActive:(BOOL)arg1;

@end

