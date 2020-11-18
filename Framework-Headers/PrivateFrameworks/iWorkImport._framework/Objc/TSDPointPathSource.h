//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDPathSource.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDSmartPathSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mNaturalSize;
}

@property struct CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
@property struct CGPoint point; // @synthesize point=mPoint;
@property int type; // @synthesize type=mType;

+ (id)doubleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)pathSourceWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
+ (id)plusWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)rightSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)starWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;
- (id)initWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
- (BOOL)isCircular;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRectangular;
- (struct CGPoint)maxPointValue;
- (struct CGPoint)minPointValue;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint)p_getControlKnobPointForArrow;
- (struct CGPoint)p_getControlKnobPointForPlus;
- (struct CGPoint)p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint)p_getControlKnobPointForStarPoints;
- (BOOL)p_isFlippedDoubleArrow;
- (BOOL)p_isRightFacingArrow;
- (struct CGPath *)p_newArrowPath;
- (struct CGPath *)p_newPlusPath;
- (struct CGPath *)p_newStarPath;
- (void)p_setControlKnobPointForArrow:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForPlus:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (void)setPointValue:(id)arg1;
- (id)valueForSetSelector:(SEL)arg1;

@end

