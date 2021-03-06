//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint
{
    unsigned long long _freeAxes;
    BOOL _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes; // @synthesize freeAxes=_freeAxes;

+ (id)billboardConstraint;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)preserveScale;
- (void)setPreserveScale:(BOOL)arg1;

@end

