//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@interface CHBottomUpStrokeGroupingStrategy : CHStrokeGroupingStrategy
{
}

+ (struct CGRect)_boundingBoxOfPoints:(const vector_fa824bf3 *)arg1 rotatedAroundPoint:(struct CGPoint)arg2 byAngle:(double)arg3;
+ (vector_ea45b3ba)_boundingBoxesOfStrokesInGroup:(id)arg1 rotatedAroundPoint:(struct CGPoint)arg2 byAngle:(double)arg3;
+ (double)_circumferenceRatioOfCircleFittedToPoints:(list_9bacdeb6)arg1 circleCenter:(struct CGPoint *)arg2 circleRadius:(double *)arg3;
+ (double)_containerSupportForPoints:(const vector_fa824bf3 *)arg1 withBounds:(struct CGRect)arg2;
+ (vector_fa824bf3)_convexHullForPoints:(vector_fa824bf3 *)arg1;
+ (vector_fa824bf3)_convexHullForStroke:(id)arg1;
+ (double)_lineOrientationForStrokePoints:(const vector_fa824bf3 *)arg1 error:(double *)arg2;
+ (struct CGRect)_unionStrokeBounds:(const vector_ea45b3ba *)arg1 aroundXPosition:(double)arg2 usingOneSideStrokeCountLimit:(long long)arg3;
+ (struct CGRect)_unionStrokeBounds:(const vector_ea45b3ba *)arg1 usingStrokeCountLimit:(long long)arg2 reverseOrder:(BOOL)arg3;
+ (double)_vectorMeanWithoutOutliers:(vector_8f06c10f *)arg1;
- (struct CGVector)_averageVectorFromSubstroke:(id)arg1 toSubstroke:(id)arg2 withOrientation:(struct CGVector)arg3 strokeRef:(id)arg4;
- (long long)_compareDistanceInWritingSequenceOfStroke:(id)arg1 andStroke:(id)arg2 toReferenceStroke:(id)arg3;
- (void)_estimateWritingDirectionAndSortSubstrokesAccordingly:(id)arg1 averageWritingOrientation:(struct CGVector *)arg2 averageStrokeDeviation:(struct CGVector *)arg3;
- (vector_fa824bf3)_flippedCenters:(const vector_fa824bf3 *)arg1 ofSubstrokes:(id)arg2 maxStrokesGap:(long long)arg3 begnning:(BOOL)arg4;
- (void)_getMergingEndOfLineCost:(double *)arg1 mergingEndOfLineStroke:(id *)arg2 forStrokeSubstrokes:(id)arg3 toLineGroup:(id)arg4;
- (void)_getMergingMiddleOfLineCost:(double *)arg1 mergingMiddleOfLineStroke:(id *)arg2 forStrokeSubstrokes:(id)arg3 toLineGroup:(id)arg4;
- (BOOL)_isStrokeClassifiedAsDoodling:(id)arg1 withSubstrokes:(id)arg2;
- (void)_mergeGroupsPostProcessing:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3;
- (void)_refineLocalWritingOrientationsForSubstrokes:(id)arg1 useCoalescedCenter:(BOOL)arg2;
- (BOOL)_refineWritingOrientationAndResortSubstrokes:(id)arg1 averageWritingOrientation:(struct CGVector *)arg2;
- (double)_scaleFactorForBoundsHeight:(double)arg1;
- (void)_smoothLocalWritingOrientations:(vector_892a0aec *)arg1;
- (void)_sortSubstrokesByWritingDirection:(id)arg1 averageWritingOrientation:(struct CGVector *)arg2;
- (id)_substrokesForStroke:(id)arg1;
- (void)_updateLocalStrokeDeviationsForSubstrokes:(id)arg1 averageStrokeDeviation:(struct CGVector *)arg2;
- (void)_updateLocalWritingOrientationsForSubstrokes:(id)arg1 useCoalescedCenter:(BOOL)arg2;
- (void)_updateNontextCandidateSupport:(id)arg1 withStroke:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 nontextStrokeIdentifiers:(id)arg4 nontextGroups:(id)arg5 createdGroups:(id)arg6;
- (void)_updateNontextCandidates:(id)arg1 byAddingStrokes:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 newNontextStrokeIdentifiers:(id)arg4 textGroups:(id)arg5 nontextGroups:(id)arg6 nontextGroupsSnapshot:(id)arg7 createdGroups:(id)arg8 shouldCancelCallback:(CDUnknownBlockType)arg9;
- (void)_updateNontextCandidates:(id)arg1 byRemovingStrokeIdentifiers:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 reinsertedStrokes:(id)arg4 removedNontextStrokeIdentifiers:(id)arg5 nontextGroups:(id)arg6 createdGroups:(id)arg7 deletedGroups:(id)arg8 shouldCancelCallback:(CDUnknownBlockType)arg9;
- (void)_updateNontextGroups:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3 byRemovingStrokeIdentifier:(id)arg4;
- (void)_updateTextGroups:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3 forAddedStroke:(id)arg4 substrokesByStrokeIdentifier:(id)arg5;
- (double)_verticalOffsetForBoundsHeight:(double)arg1 andScaleFactor:(double)arg2;
- (id)_writingDirectionSortedStrokeIdentifiersFromSubstrokes:(id)arg1 localWritingOrientations:(vector_892a0aec *)arg2;
- (id)averageAngleAndReliabilityForStrokeGroup:(id)arg1;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 orderedStrokesIDs:(id *)arg2;
- (id)updatedGroupingResultWithCancellationBlock:(CDUnknownBlockType)arg1;

@end

