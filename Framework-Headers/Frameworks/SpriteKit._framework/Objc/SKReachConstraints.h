//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@interface SKReachConstraints : NSObject <NSSecureCoding>
{
    double _lowerAngleLimit;
    double _upperAngleLimit;
}

@property (nonatomic) double lowerAngleLimit; // @synthesize lowerAngleLimit=_lowerAngleLimit;
@property (nonatomic) double upperAngleLimit; // @synthesize upperAngleLimit=_upperAngleLimit;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2;

@end

