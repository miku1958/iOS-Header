//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSArray, NSSet, NSString, RBAssertionIntransientState, RBAssertionTransientState, RBConcreteTarget, RBInheritanceCollection, RBProcess, RBProcessState, RBSAssertionIdentifier, RBSProcessAssertionInfo, RBSystemState;

@interface RBAssertion : NSObject <RBStateCapturing>
{
    struct os_unfair_lock_s _lock;
    RBConcreteTarget *_target;
    RBSAssertionIdentifier *_identifier;
    NSString *_explanation;
    NSArray *_attributes;
    RBSystemState *_systemState;
    RBProcessState *_processState;
    RBAssertionTransientState *_transientState;
    RBAssertionIntransientState *_intransientState;
    double _creationTime;
    unsigned long long _invalidationReason;
    unsigned long long _acquisitionCompletionPolicy;
    NSSet *_originatorInheritances;
    RBSProcessAssertionInfo *_assertionInfo;
    id _plugInHoldToken;
    BOOL _suspended;
    BOOL _persistent;
    BOOL _active;
    BOOL _resolvedState;
    RBProcess *_originator;
    NSString *_description;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property (readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL definesRelativeStartTime;
@property (readonly, copy) NSString *description; // @synthesize description=_description;
@property (readonly, nonatomic) unsigned long long endPolicy;
@property (readonly, copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property (readonly, nonatomic) BOOL hasDomainAttribute;
@property (readonly, nonatomic) BOOL hasHereditaryGrant;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, copy, nonatomic) RBAssertionIntransientState *intransientState; // @synthesize intransientState=_intransientState;
@property (readonly, nonatomic, getter=isValid) BOOL invalid;
@property (readonly, nonatomic) BOOL invalidatesSynchronously;
@property (readonly, nonatomic) double invalidationDuration;
@property (nonatomic) unsigned long long invalidationReason;
@property (readonly, nonatomic) unsigned long long legacyReason;
@property (readonly, nonatomic) RBProcess *originator; // @synthesize originator=_originator;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent; // @synthesize persistent=_persistent;
@property (strong, nonatomic) id plugInHoldToken;
@property (readonly, copy, nonatomic) RBProcessState *processState;
@property (readonly, nonatomic) unsigned long long runningReason;
@property (readonly, nonatomic) NSSet *sourceEnvironments;
@property (readonly, nonatomic) unsigned long long startPolicy;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) BOOL suspendsOnOriginatorSuspension;
@property (readonly, copy, nonatomic) RBConcreteTarget *target; // @synthesize target=_target;
@property (readonly, nonatomic) BOOL terminateTargetOnOriginatorExit;
@property (readonly, nonatomic) double warningDuration;

+ (id)assertionWithDescriptor:(id)arg1 target:(id)arg2 originator:(id)arg3 context:(id)arg4;
+ (id)assertionWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 originator:(id)arg5 context:(id)arg6;
- (void).cxx_destruct;
- (void)activate;
- (void)applyToAssertionTransientState:(id)arg1 withAttributeContext:(id)arg2;
- (void)applyToProcessState:(id)arg1 withAttributeContext:(id)arg2;
- (void)applyToSystemState:(id)arg1 withAttributeContext:(id)arg2;
- (id)captureState;
- (void)deactivate;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;
- (BOOL)resolveStateWithContext:(id)arg1;
- (void)resume;
- (void)suspend;
- (id)updateProcessStateWithAttributeContext:(id)arg1;

@end

