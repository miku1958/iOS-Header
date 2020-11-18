//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint
{
    SCNNode *_target;
    BOOL _gimbalLockEnabled;
    struct SCNVector3 _targetOffset;
    struct SCNVector3 _upVector;
    struct SCNVector3 _localFront;
}

@property (nonatomic) BOOL gimbalLockEnabled;
@property (nonatomic) struct SCNVector3 localFront;
@property (strong, nonatomic) SCNNode *target;
@property (nonatomic) struct SCNVector3 targetOffset;
@property (nonatomic) struct SCNVector3 worldUp;

+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)setUpVector:(struct SCNVector3)arg1;
- (struct SCNVector3)upVector;

@end

