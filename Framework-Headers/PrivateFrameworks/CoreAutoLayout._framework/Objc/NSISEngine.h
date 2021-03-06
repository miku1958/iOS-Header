//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutoLayout/NSISVariableDelegate-Protocol.h>

@class NSHashTable, NSISObjectiveLinearExpression, NSISVariable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, _NSISVariableObservable;
@protocol NSISEngineDelegate, NSObservable;

@interface NSISEngine : NSObject <NSISVariableDelegate>
{
    NSMutableArray *_variablesWithValueRestrictionViolations;
    NSMutableArray *_pendingRemovals;
    NSHashTable *_pendingMarkerDelegates;
    NSObject<NSObservable> *_variableChangeTransactionSignal;
    NSMapTable *_variableObservables;
    _NSISVariableObservable *_dirtyObservables;
    id<NSISEngineDelegate> _delegate;
    NSMapTable *_brokenConstraintPositiveErrors;
    NSMapTable *_brokenConstraintNegativeErrors;
    CDUnknownBlockType _unsatisfiabilityHandler;
    unsigned long long _pivotCount;
    unsigned long long _variableChangeCount;
    struct CGSize _engineScalingCoefficients;
    NSMutableDictionary *_recordedOperations;
    NSThread *_allowedBGThread;
    int _automaticOptimizationDisabledCount;
    int _engineDelegateCallsDisabledCount;
    int _variableDelegateCallsDisabledCount;
    unsigned int _totalChangeCount;
    unsigned int _changeCountAtLastOptimization;
    BOOL _revertsAfterUnsatisfiabilityHandler;
    BOOL _accumulatingRemovals;
    BOOL _engineNeedsOptimization;
    BOOL _allowUnoptimizedReads;
    BOOL _optimizationInProgress;
    BOOL _accessedFromMainThread;
    BOOL _engineNeedsRebuildFromConstraints;
    BOOL _changeNotificationsDirty;
    NSMapTable *_variablesObservations;
    NSMutableSet *_dirtyVariables;
    NSMapTable *_rows;
    CDStruct_52118125 _engineVarTable;
    CDStruct_52118125 _rowTables[2];
    CDStruct_52118125 _colTables[2];
    NSISVariable *_headForObjectiveRow;
    struct {
        NSISEngine *engine;
        CDStruct_183601bc *storage;
    } _objectiveRow;
    NSISVariable *_placeholderHeadForExpressionBeingAdded;
    NSISVariable *_artificialRowHead;
    NSISVariable *_artificialObjectiveRowHead;
    NSISObjectiveLinearExpression *_artificialObjectiveRowBody;
}

@property (strong) NSISObjectiveLinearExpression *artificialObjectiveRowBody; // @synthesize artificialObjectiveRowBody=_artificialObjectiveRowBody;
@property (strong) NSISVariable *artificialObjectiveRowHead; // @synthesize artificialObjectiveRowHead=_artificialObjectiveRowHead;
@property (strong) NSISVariable *artificialRowHead; // @synthesize artificialRowHead=_artificialRowHead;
@property (readonly, copy) NSString *debugDescription;
@property id<NSISEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize engineScalingCoefficients; // @synthesize engineScalingCoefficients=_engineScalingCoefficients;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isOptimizationInProgress) BOOL optimizationInProgress;
@property BOOL revertsAfterUnsatisfiabilityHandler; // @synthesize revertsAfterUnsatisfiabilityHandler=_revertsAfterUnsatisfiabilityHandler;
@property BOOL shouldIntegralize;
@property (readonly) Class superclass;
@property (readonly) unsigned long long variableChangeCount;
@property (strong) NSMutableArray *variablesWithValueRestrictionViolations; // @synthesize variablesWithValueRestrictionViolations=_variablesWithValueRestrictionViolations;

+ (BOOL)_dbg_anyEngineContainsVariable:(id)arg1;
+ (BOOL)enableEngineTrace;
+ (void)setEnableEngineTrace:(BOOL)arg1;
+ (void)setLogOnInvalidUseFromBGThread:(BOOL)arg1;
+ (void)setTraceFileSuffix:(id)arg1;
+ (id)traceFileSuffix;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (unsigned long long)_optimizeWithoutRebuilding;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (id)allVariableValues;
- (void)beginBookkeepingForVariableIfNeeded:(id)arg1;
- (void)beginRecording;
- (id)candidateRedundantConstraints;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (unsigned long long)colCount;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (id)constraints;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (BOOL)containsConstraintWithMarker:(id)arg1;
- (BOOL)containsVariable:(id)arg1;
- (void)dealloc;
- (void)endBookkeepingForVariableIfUnused:(id)arg1;
- (CDStruct_fcd6c539)engineVarIndexForVariable:(id)arg1;
- (void)enumerateRows:(CDUnknownBlockType)arg1;
- (BOOL)exerciseAmbiguityInVariable:(id)arg1;
- (BOOL)hasObservableForVariable:(id)arg1;
- (BOOL)hasValue:(double *)arg1 forExpression:(id)arg2;
- (BOOL)hasValue:(double *)arg1 forVariable:(id)arg2;
- (BOOL)hasValueForPossiblyDeallocatedVariable:(id)arg1;
- (id)init;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (BOOL)isObservingChangesForVariable:(id)arg1;
- (BOOL)isTrackingVariableChanges;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (id)observableForVariable:(id)arg1;
- (unsigned long long)optimize;
- (void)performModifications:(CDUnknownBlockType)arg1 withUnsatisfiableConstraintsHandler:(CDUnknownBlockType)arg2;
- (void)performPendingChangeNotifications;
- (void)performPendingChangeNotificationsForItem:(id)arg1;
- (unsigned long long)pivotCount;
- (id)recordedCommandsData;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)removeObservableForVariable:(id)arg1;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(BOOL)arg2;
- (unsigned long long)rowCount;
- (void)startObservingChangesForVariable:(id)arg1;
- (void)stopObservingChangesForVariable:(id)arg1;
- (CDStruct_fee1177a *)traceState;
- (BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(CDUnknownBlockType)arg3;
- (double)valueForExpression:(id)arg1;
- (double)valueForVariable:(id)arg1;
- (BOOL)valueOfVariableIsAmbiguous:(id)arg1;
- (int)valueRestrictionForEngineVarIndex:(CDStruct_fcd6c539)arg1;
- (id)variableChangeTransactionSignal;
- (id)variableForEngineVarIndex:(CDStruct_fcd6c539)arg1;
- (void)verifyInternalIntegrity;
- (void)withAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;
- (void)withBehaviors:(unsigned long long)arg1 performModifications:(CDUnknownBlockType)arg2;
- (void)withDelegateCallsDisabled:(CDUnknownBlockType)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;

@end

