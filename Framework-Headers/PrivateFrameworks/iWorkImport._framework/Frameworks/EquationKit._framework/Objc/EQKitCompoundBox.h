//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitBox.h>

@class NSArray;

@interface EQKitCompoundBox : EQKitBox
{
    NSArray *mChildBoxes;
    double mHeight;
    double mDepth;
    double mWidth;
    BOOL mDimensionsValid;
    struct CGRect mErasableBounds;
    BOOL mErasableBoundsValid;
}

@property (readonly, nonatomic) NSArray *childBoxes; // @synthesize childBoxes=mChildBoxes;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double width;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect)erasableBounds;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (struct CGRect)p_cacheErasableBounds;

@end

