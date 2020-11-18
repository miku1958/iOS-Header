//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartPieLabelPlacement.h>

__attribute__((visibility("hidden")))
@interface TSCHChartPieBendedLineLabelPlacement : TSCHChartPieLabelPlacement
{
}

- (double)amountLabelsInQuadrantNeedToShift:(id)arg1 cleanUpOption:(unsigned long long)arg2;
- (double)amountWedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (double)amountWedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1;
- (double)amountWedgeLayoutInfoShouldShiftToPreventShortFirstHalf:(id)arg1;
- (id)arrayOfConflictingLabelsWithWedgeLayoutInfosOnOneSide:(id)arg1;
- (id)bottomLeftQuadrant;
- (id)bottomRightQuadrant;
- (struct CGPoint)calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint)calloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3;
- (struct CGPoint)calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (BOOL)conflictBetweenWedgeLayoutInfo:(id)arg1 nextWedgeLayoutInfo:(id)arg2;
- (struct CGPoint)defaultCalloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3;
- (struct CGPoint)firstHalfOfBendedLineVectorNormalizedWithWedgeLayoutInfo:(id)arg1 shouldBeUpwards:(BOOL)arg2;
- (void)fixConflictsInOneQuadrantOfPieChartWithArray:(id)arg1 quadrantInHorizontalHalfDisk:(unsigned long long)arg2;
- (void)fixOverlapsOnOneVerticalSideWithConflictingLabelsArray:(id)arg1;
- (void)fixOverlapsOutsideWedges;
- (void)fixOverlapsWithWedgeLayoutInfos:(id)arg1 inVerticalHalfDisk:(unsigned long long)arg2;
- (id)innermostWedgeLayoutInfo:(id)arg1;
- (BOOL)innermostWedgeLayoutInfoWillUsePerpendicularAngle:(id)arg1;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id *)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id *)arg5 stroke:(id)arg6 outStroke:(id *)arg7 context:(struct CGContext *)arg8 contextScale:(float)arg9;
- (void)preventOverlapsWithinWedges;
- (double)shiftAmountForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(BOOL)arg3;
- (void)shiftLabelsVerticallyInOneQuadrantWithWedgeLayoutInfos:(id)arg1 shiftAmount:(double)arg2 quadrantInHorizontalHalfDisk:(unsigned long long)arg3;
- (void)shiftLabelsVerticallyInQuadrantIfNecessary:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (void)shiftLabelsVerticallyToCleanUpPlacement;
- (void)shiftLabelsVerticallyToCleanUpPlacementWithCleanUpOption:(unsigned long long)arg1;
- (id)topLeftQuadrant;
- (id)topRightQuadrant;
- (double)totalHeightOverlapWithArray:(id)arg1;
- (struct CGAffineTransform)transformToShiftWedgeLayoutInfoAwayFromAdjacentWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(BOOL)arg3 totalHeightOverlap:(double)arg4;
- (id)updateLabelTransformsToPreventOverlap;
- (BOOL)wedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (BOOL)wedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1;
- (BOOL)wedgeLayoutInfoShouldShiftToPreventTooShortCalloutLineFirstHalf:(id)arg1;
- (BOOL)wedgeLayoutInfoShouldUsePerpendicularAngle:(id)arg1 defaultMidpoint:(struct CGPoint)arg2;
- (id)wedgeLayoutInfosInHorizontalHalfDiskWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2;
- (id)wedgeLayoutInfosInOneQuadrant:(id)arg1 verticalHalfDisk:(unsigned long long)arg2 horizontalHalfDisk:(unsigned long long)arg3;
- (id)wedgeLayoutInfosInVerticalHalfDiskWithWedgeLayoutInfos:(id)arg1 verticalHalfDisk:(unsigned long long)arg2;
- (id)wedgeLayoutInfosThatNeedShiftingToCleanUpQuadrant:(id)arg1 cleanUpOption:(unsigned long long)arg2;

@end

