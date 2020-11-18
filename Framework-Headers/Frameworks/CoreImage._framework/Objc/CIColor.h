//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying>
{
    void *_priv;
    void *_pad[3];
}

@property (readonly) double alpha;
@property (readonly) double blue;
@property (readonly) struct CGColorSpace *colorSpace;
@property (readonly) const double *components;
@property (readonly) double green;
@property (readonly) unsigned long long numberOfComponents;
@property (readonly) double red;
@property (readonly) NSString *stringRepresentation;

+ (id)blackColor;
+ (id)blueColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)colorWithString:(id)arg1;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)magentaColor;
+ (id)redColor;
+ (BOOL)supportsSecureCoding;
+ (id)whiteColor;
+ (id)yellowColor;
- (struct CGColor *)cgColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

