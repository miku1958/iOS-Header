//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    struct CGPoint mPosition;
    struct CGSize mSize;
    struct {
        unsigned int widthValid:1;
        unsigned int heightValid:1;
        unsigned int horizontalFlip:1;
        unsigned int verticalFlip:1;
    } mFlags;
    double mAngle;
}

@property (readonly, nonatomic) double angle; // @synthesize angle=mAngle;
@property (readonly, nonatomic) BOOL heightValid;
@property (readonly, nonatomic) BOOL horizontalFlip;
@property (readonly, nonatomic) struct CGPoint position; // @synthesize position=mPosition;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=mSize;
@property (readonly, nonatomic) BOOL verticalFlip;
@property (readonly, nonatomic) BOOL widthValid;

+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1;
+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3;
+ (id)geometryFromTransform:(struct CGAffineTransform)arg1 withSize:(struct CGSize)arg2;
- (struct CGRect)boundsBeforeRotation;
- (struct CGPoint)center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct CGAffineTransform)fullTransform;
- (id)geometryByAppendingGeometry:(id)arg1;
- (id)geometryByAppendingTransform:(struct CGAffineTransform)arg1;
- (id)geometryRelativeToGeometry:(id)arg1;
- (id)geometryWithNewBounds:(struct CGRect)arg1;
- (id)geometryWithParentGeometry:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (id)initWithFullTransform:(struct CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3;
- (id)initWithHeight:(double)arg1;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 angle:(double)arg3;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 widthValid:(BOOL)arg3 heightValid:(BOOL)arg4 horizontalFlip:(BOOL)arg5 verticalFlip:(BOOL)arg6 angle:(double)arg7;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithTransform:(struct CGAffineTransform)arg1 size:(struct CGSize)arg2;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2 angle:(double)arg3;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2 horizontalFlip:(BOOL)arg3 verticalFlip:(BOOL)arg4 angle:(double)arg5;
- (id)initWithWidth:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualExceptForPosition:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)normalizedGeometry;
- (struct CGAffineTransform)transform;
- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg1 centeredAtPoint:(struct CGPoint)arg2 withFlips:(BOOL)arg3;
- (struct CGAffineTransform)transformBasedOnRect:(struct CGRect)arg1;
- (struct CGAffineTransform)transformWithoutFlips;
- (struct CGRect)transformedBounds;
- (struct CGPoint)transformedBoundsOrigin;

@end
