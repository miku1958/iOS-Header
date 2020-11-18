//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : NSObject
{
    NSMutableArray *_failureRequirements;
    char *_failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}

@property (readonly) BOOL hasUnmetFailureRequirementsOrDependents;

+ (void)buildFailureMapForFailureRequirements:(id)arg1;
- (void).cxx_destruct;
- (void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2 pressesEvent:(id)arg3;
- (BOOL)_isFailureRequirementWaitingForOtherFailureRequirements:(id)arg1;
- (void)_queueRecognizersForResetIfFinished;
- (void)_rebuildFailureMapDeferringRelease;
- (void)dealloc;
- (id)description;
- (void)failureRequirementBeganRunning:(id)arg1;
- (void)failureRequirementCompleted:(id)arg1 withEvent:(id)arg2 pressesEvent:(id)arg3;
- (void)failureRequirementDeallocated:(id)arg1;
- (void)failureRequirementEnteredOtherFailureMap:(id)arg1;
- (id)initWithRelatedFailureRequirements:(id)arg1;
- (void)rebuildFailureMap;
- (void)reloadFailureMap;

@end

