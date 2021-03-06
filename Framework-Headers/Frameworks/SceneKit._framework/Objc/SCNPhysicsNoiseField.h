//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNPhysicsField.h>

__attribute__((visibility("hidden")))
@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    double _smoothness;
    double _animationSpeed;
}

@property (nonatomic) double animationSpeed;
@property (nonatomic) double smoothness;

+ (BOOL)supportsSecureCoding;
- (struct c3dPhysicsField *)_createField;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;
- (id)valueForUndefinedKey:(id)arg1;

@end

