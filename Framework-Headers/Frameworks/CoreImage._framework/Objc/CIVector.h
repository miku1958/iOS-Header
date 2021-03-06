//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _count;
    union {
        double vec[4];
        double *ptr;
    } _u;
}

@property (readonly) struct CGAffineTransform CGAffineTransformValue;
@property (readonly) struct CGPoint CGPointValue;
@property (readonly) struct CGRect CGRectValue;
@property (readonly) double W;
@property (readonly) double X;
@property (readonly) double Y;
@property (readonly) double Z;
@property (readonly) double *_values;
@property (readonly) unsigned long long count;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)supportsSecureCoding;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)vectorWithCGPoint:(struct CGPoint)arg1;
+ (id)vectorWithCGRect:(struct CGRect)arg1;
+ (id)vectorWithString:(id)arg1;
+ (id)vectorWithValues:(const double *)arg1 count:(unsigned long long)arg2;
+ (id)vectorWithX:(double)arg1;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (float)_dot:(id)arg1;
- (float)_norm;
- (id)_orthonormalizeTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;
- (id)initWithCGPoint:(struct CGPoint)arg1;
- (id)initWithCGRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithValues:(const double *)arg1 count:(unsigned long long)arg2;
- (id)initWithX:(double)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (double)valueAtIndex:(unsigned long long)arg1;

@end

