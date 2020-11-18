//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSISVariableDelegate-Protocol.h>

@class NSISVariable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol NSISEngineDelegate;

@interface NSISEngine : NSObject <NSISVariableDelegate>
{
    NSMapTable *_rows;
    NSMapTable *_rowsCrossIndex;
    NSISVariable *_headForObjectiveRow;
    NSMutableArray *_variablesWithValueRestrictionViolations;
    NSMutableArray *_pendingRemovals;
    NSMutableArray *_pendingMarkerDelegates;
    id<NSISEngineDelegate> _delegate;
    NSMapTable *_brokenConstraintPositiveErrors;
    NSMapTable *_brokenConstraintNegativeErrors;
    NSMutableSet *_variablesWithIntegralizationViolations;
    struct __CFDictionary *_integralizationAdjustmentsForConstraintMarkers;
    CDUnknownBlockType _unsatisfiabilityHandler;
    unsigned long long _pivotCount;
    struct CGSize _engineScalingCoefficients;
    NSMutableDictionary *_recordedOperations;
    int _automaticOptimizationDisabledCount;
    int _engineDelegateCallsDisabledCount;
    int _variableDelegateCallsDisabledCount;
    unsigned int _totalChangeCount;
    unsigned int _changeCountAtLastOptimization;
    BOOL _lastOptimizationInvolvedIntegralization;
    BOOL _shouldIntegralize;
    BOOL _revertsAfterUnsatisfiabilityHandler;
    BOOL _accumulatingRemovals;
    BOOL _engineNeedsRebuildFromConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property id<NSISEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize engineScalingCoefficients; // @synthesize engineScalingCoefficients=_engineScalingCoefficients;
@property (readonly) unsigned long long hash;
@property (strong) NSISVariable *headForObjectiveRow; // @synthesize headForObjectiveRow=_headForObjectiveRow;
@property struct __CFDictionary *integralizationAdjustmentsForConstraintMarkers;
@property BOOL revertsAfterUnsatisfiabilityHandler; // @synthesize revertsAfterUnsatisfiabilityHandler=_revertsAfterUnsatisfiabilityHandler;
@property (strong) NSMapTable *rows; // @synthesize rows=_rows;
@property (strong) NSMapTable *rowsCrossIndex; // @synthesize rowsCrossIndex=_rowsCrossIndex;
@property BOOL shouldIntegralize;
@property (readonly) Class superclass;
@property (strong) NSMutableSet *variablesWithIntegralizationViolations; // @synthesize variablesWithIntegralizationViolations=_variablesWithIntegralizationViolations;
@property (strong) NSMutableArray *variablesWithValueRestrictionViolations; // @synthesize variablesWithValueRestrictionViolations=_variablesWithValueRestrictionViolations;

- (id)_brokenConstraintNegativeErrors;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrors;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2;
- (void)_flushPendingRemovals;
- (unsigned long long)_optimizeWithoutRebuilding;
- (void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (void)addExpression:(id)arg1 times:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (id)allRowHeads;
- (void)beginRecording;
- (BOOL)bodyVarIsAmbiguous:(id)arg1 withPivotOfOutgoingRowHead:(id *)arg2;
- (id)candidateRedundantConstraints;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (id)chooseHeadForRowBody:(id)arg1;
- (id)chooseOutgoingRowHeadForIncomingRowHead:(id)arg1;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (id)constraints;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (BOOL)containsConstraintWithMarker:(id)arg1;
- (id)createExpressionBySubstitutingForRowHeadVariablesInExpression:(id)arg1;
- (void)dealloc;
- (void)enumerateOriginalConstraints:(CDUnknownBlockType)arg1;
- (void)enumerateRows:(CDUnknownBlockType)arg1;
- (void)enumerateRowsCrossIndex:(CDUnknownBlockType)arg1;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(BOOL)arg2;
- (BOOL)exerciseAmbiguityInVariable:(id)arg1;
- (id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)arg1 body:(id)arg2;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1;
- (void)fixupIntegralizationViolations;
- (id)handleUnsatisfiableRowWithHead:(id)arg1 body:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (BOOL)hasValue:(double *)arg1 forVariable:(id)arg2;
- (BOOL)incoming:(id *)arg1 andOutgoing:(id *)arg2 rowHeadsThatMakeValueAmbiguousForVariable:(id)arg3;
- (id)init;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (unsigned long long)minimizeConstantInObjectiveRowWithHead:(id)arg1;
- (id)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (unsigned long long)numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)arg1 ignoringConstraintsWithMarkers:(id)arg2;
- (unsigned long long)optimize;
- (id)outgoingRowHeadForRemovingConstraintWithMarker:(id)arg1;
- (void)performModifications:(CDUnknownBlockType)arg1 withUnsatisfiableConstraintsHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)pivotCount;
- (void)pivotToMakeBodyVar:(id)arg1 newHeadOfRowWithHead:(id)arg2 andDropRow:(BOOL)arg3;
- (id)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (void)rawRemoveRowWithHead:(id)arg1;
- (void)rawSetRowWithHead:(id)arg1 body:(id)arg2;
- (void)rebuildFromConstraints;
- (id)recordedCommandsData;
- (void)removeBodyVarFromAllRows:(id)arg1;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)removeRowWithHead:(id)arg1;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (void)replaceMarker:(id)arg1 withMarkerPlusCoefficient:(double)arg2 timesVariable:(id)arg3;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(BOOL)arg2;
- (id)rowBodyForHead:(id)arg1;
- (id)rowBodyForNonObjectiveHead:(id)arg1;
- (id)rowBodyForObjectiveHead:(id)arg1;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasAddedToRowWithHead:(id)arg2;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasRemovedFromRowWithHead:(id)arg2;
- (void)rowCrossIndexNoteDroppedBodyVar:(id)arg1;
- (id)rowHeadsForRowsContainingBodyVar:(id)arg1;
- (void)setIntegralizationAdjustment:(double)arg1 forMarker:(id)arg2;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setRowWithHead:(id)arg1 body:(id)arg2;
- (void)substituteOutAllOccurencesOfBodyVar:(id)arg1 withExpression:(id)arg2;
- (BOOL)tryAddingDirectly:(id)arg1;
- (BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(CDUnknownBlockType)arg3;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (BOOL)tryUsingArtificialVariableToAddConstraintWithMarker:(id)arg1 rowBody:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (double)valueForVariable:(id)arg1;
- (double)valueForVariableWithoutIntegralizationAdjustments:(id)arg1;
- (BOOL)valueOfVariableIsAmbiguous:(id)arg1;
- (id)variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)arg1 varsAlreadyAdjusted:(id)arg2;
- (void)verifyInternalIntegrity;
- (void)withAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;
- (void)withBehaviors:(unsigned long long)arg1 performModifications:(CDUnknownBlockType)arg2;
- (void)withDelegateCallsDisabled:(CDUnknownBlockType)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;

@end

