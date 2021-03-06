//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognitionSessionResult, NSArray, NSDictionary;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject
{
    BOOL _isInlineContinuousMode;
    id<CHStrokeProvider> _strokeProvider;
    CHRecognitionSessionResult *_sessionLastResult;
    NSArray *_locales;
    NSArray *_textInputTargets;
    NSDictionary *_groupingStrategiesByIdentifier;
}

@property (readonly, strong, nonatomic) NSDictionary *groupingStrategiesByIdentifier; // @synthesize groupingStrategiesByIdentifier=_groupingStrategiesByIdentifier;
@property (readonly, nonatomic) BOOL isInlineContinuousMode; // @synthesize isInlineContinuousMode=_isInlineContinuousMode;
@property (readonly, strong, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property (readonly, strong, nonatomic) CHRecognitionSessionResult *sessionLastResult; // @synthesize sessionLastResult=_sessionLastResult;
@property (readonly, strong, nonatomic) id<CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
@property (readonly, strong, nonatomic) NSArray *textInputTargets; // @synthesize textInputTargets=_textInputTargets;

+ (BOOL)_isGroupableNonTextForStrokeClassification:(long long)arg1;
- (id)_greedyCombinationOfGroupingResults:(id)arg1 stableStrokeIdentifiers:(id)arg2 withCancellationBlock:(CDUnknownBlockType)arg3;
- (id)_groupsFromClusterResult:(id)arg1 strokes:(id)arg2 strokeClassificationsByStrokeIdentifier:(id)arg3;
- (id)_simpleDrawingForStrokeGroup:(id)arg1 originalDrawing:(id *)arg2 orderedStrokeIDs:(id *)arg3;
- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3 isInlineContinuousMode:(BOOL)arg4 inlineContinuousModeTargets:(id)arg5;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;
- (id)strokesForIdentifiers:(id)arg1;
- (id)updatedGroupingResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 orderedStrokeIdentifiers:(id)arg3 strokeClassificationResult:(id)arg4 cancellationBlock:(CDUnknownBlockType)arg5;

@end

