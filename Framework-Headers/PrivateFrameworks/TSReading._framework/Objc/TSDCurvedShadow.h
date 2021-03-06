//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShadow.h>

@interface TSDCurvedShadow : TSDShadow
{
    double mCurve;
}

@property (readonly, nonatomic) double curve; // @synthesize curve=mCurve;

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(BOOL)arg7;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGPoint)boundsShiftForSize:(struct CGSize)arg1;
- (double)clampOffset:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct CGRect)expandedBoundsForRect:(struct CGRect)arg1;
- (double)getVerticalOffset:(struct CGSize)arg1;
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(BOOL)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (double)offsetFromCurve;
- (double)paddingForBlur;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (unsigned long long)shadowType;
- (BOOL)showForEditingText;

@end

