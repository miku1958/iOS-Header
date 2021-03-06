//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, TSDCommandSelectionBehavior;

@protocol TSDLayoutManipulatingTracker
- (void)changeDynamicLayoutsForReps:(NSSet *)arg1;
- (void)commitChangesForReps:(NSSet *)arg1;
- (BOOL)operationShouldBeDynamic;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(NSSet *)arg1;
- (BOOL)supportsAlignmentGuides;

@optional
- (void)didChangeCurrentlyTransformingReps;
- (void)didEndDynamicOperationForReps:(NSSet *)arg1;
- (TSDCommandSelectionBehavior *)selectionBehaviorForReps:(NSSet *)arg1;
- (void)willBeginDynamicOperationForReps:(NSSet *)arg1;
@end

