//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@class NSArray, NSString;

@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy
{
    NSString *_strategyIdentifier;
    double _minimumDrawingSize;
    double _splitCostThreshold;
    double _transitionTimeWeight;
    double _transitionTimeUpperBound;
    double _verticalDistanceWeight;
    double _leftTransitionWeight;
    double _leftTransitionUpperBound;
    double _horizontalDistanceBarrier;
    double _horizontalDistanceWeight;
    double _aspectRatioWeight;
    double _writingDirectionWeight;
    double _writingDirectionUpperBound;
    double _writingDirectionMinCoeff;
    double _minLineHeightScore;
    double _minArcLengthScore;
    double _expectedSubstrokesPerLine;
    double _minSubstrokesForSplit;
    double _targetFitnessWeight;
    BOOL _reorderStrokes;
    NSArray *_textInputTargets;
}

@property (readonly, strong, nonatomic) NSArray *textInputTargets; // @synthesize textInputTargets=_textInputTargets;

- (double)_accumulatedTimeDifferences:(id)arg1;
- (double)_estimateSplitScore:(id)arg1 withTextInputTargets:(id)arg2 arcLengthsByStrokeIdentifier:(id)arg3;
- (id)_findMostProbableTextInputTarget:(id)arg1 forGroupBounds:(struct CGRect)arg2 outOverlap:(double *)arg3 outDistance:(double *)arg4;
- (id)_strokeGroupWithStrokes:(id)arg1 orderedStrokeIdentifiers:(id)arg2 previousGroups:(id)arg3 shouldSearchForStableIdentifier:(BOOL)arg4;
- (id)_strokeIdentifersFromStrokes:(id)arg1;
- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1 locale:(id)arg2 textInputTargets:(id)arg3;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;
- (id)strategyIdentifier;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(CDUnknownBlockType)arg6;

@end
