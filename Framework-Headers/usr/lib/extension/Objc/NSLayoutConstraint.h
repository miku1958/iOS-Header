//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSISConstraint-Protocol.h>

@class NSLayoutAnchor, NSSet, NSString, _NSConstraintDescriptionLayoutRelationshipNode;

@interface NSLayoutConstraint : NSObject <NSISConstraint>
{
    id _container;
    id _firstAnchor;
    id _secondAnchor;
    double _constant;
    double _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}

@property (setter=_setAssociatedRelationshipNode:) _NSConstraintDescriptionLayoutRelationshipNode *_associatedRelationshipNode;
@property (setter=_setContainerDeclaredConstraint:) BOOL _containerDeclaredConstraint;
@property (readonly, copy) NSSet *_referencedLayoutItems;
@property (getter=isActive) BOOL active;
@property double constant;
@property id container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, setter=_setFirstAnchor:) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property (readonly) long long firstAttribute;
@property (readonly) id firstItem;
@property (readonly) BOOL hasBeenLowered;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier;
@property (nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) BOOL loweredConstantNeedsUpdate;
@property (setter=_setMultiplier:) double multiplier;
@property float priority;
@property (setter=_setRelation:) long long relation;
@property (copy, setter=_setSecondAnchor:) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property (readonly) long long secondAttribute;
@property (readonly) id secondItem;
@property BOOL shouldBeArchived;
@property (readonly) Class superclass;
@property (copy) NSString *symbolicConstant;
@property (readonly) double unsatisfaction;

+ (void)_addOrRemoveConstraints:(id)arg1 activate:(BOOL)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (void)_setLegacyDecodingOnly:(BOOL)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;
- (BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id *)arg5;
- (void)_addToEngine:(id)arg1;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (id)_allocationDescription;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double *)arg1;
- (id)_ancestorRelationshipNodes;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (id)_constraintValueCopy;
- (unsigned long long)_constraintValueHashIncludingConstant:(BOOL)arg1 includeOtherMutableProperties:(BOOL)arg2;
- (void)_containerGeometryDidChange;
- (id)_deallocSafeDescription;
- (BOOL)_deferDTraceLogging;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (BOOL)_effectiveConstant:(double *)arg1 error:(id *)arg2;
- (struct CGSize)_engineToContainerScalingCoefficients;
- (void)_ensureValueMaintainsArbitraryLimit:(double *)arg1;
- (BOOL)_existsInEngine:(id)arg1;
- (void)_explainUnsatisfaction;
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;
- (double)_fudgeIncrement;
- (id)_identifier;
- (BOOL)_isEqualToConstraintValue:(id)arg1 includingConstant:(BOOL)arg2 includeOtherMutableProperties:(BOOL)arg3;
- (BOOL)_isFudgeable;
- (BOOL)_isIBPrototypingLayoutConstraint;
- (id)_layoutEngine;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL *)arg2;
- (BOOL)_loweredConstantIsRounded;
- (id)_loweredExpression;
- (void)_makeExtraVars;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (BOOL)_nsib_isRedundant;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (int)_primitiveConstraintType;
- (id)_priorityDescription;
- (BOOL)_referencesLayoutItem:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (void)_setActive:(BOOL)arg1 mutuallyExclusiveConstraints:(id *)arg2;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;
- (void)_setIdentifier:(id)arg1;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setMutablePropertiesFromConstraint:(id)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (id)_symbolicConstant;
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(CDUnknownBlockType)arg1;
- (id)animations;
- (id)asciiArtDescription;
- (void)dealloc;
- (id)descriptionAccessory;
- (double)dissatisfaction;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (double)priorityForVariable:(id)arg1;
- (void)setAnimations:(id)arg1;
- (void)setHasBeenLowered:(BOOL)arg1;
- (id)sourceRelationshipHierarchy;

@end

