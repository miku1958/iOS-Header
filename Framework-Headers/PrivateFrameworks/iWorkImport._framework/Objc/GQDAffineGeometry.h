//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDAffineGeometry : NSObject <GQDNameMappable>
{
    struct CGSize mNaturalSize;
    struct CGSize mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    struct CGPoint mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect)boundsOfTransformedRect:(struct CGRect)arg1 transform:(id)arg2;
+ (const struct StateSpec *)stateForReading;
+ (void)transformRect:(struct CGRect)arg1 transform:(id)arg2 upperLeft:(struct CGPoint *)arg3 lowerLeft:(struct CGPoint *)arg4 lowerRight:(struct CGPoint *)arg5 upperRight:(struct CGPoint *)arg6;
- (float)angle;
- (BOOL)aspectRatioLocked;
- (BOOL)horizontalFlip;
- (struct CGRect)naturalBounds;
- (struct CGSize)naturalSize;
- (struct CGPoint)nonrotatedPosition;
- (struct CGPoint)position;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)setAngle:(float)arg1;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (void)setHorizontalFlip:(BOOL)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setShearXAngle:(float)arg1;
- (void)setShearYAngle:(float)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setSizesLocked:(BOOL)arg1;
- (void)setVerticalFlip:(BOOL)arg1;
- (float)shearXAngle;
- (float)shearYAngle;
- (struct CGSize)size;
- (struct CGSize)sizeOfBoundingBox;
- (BOOL)sizesLocked;
- (struct CGAffineTransform)transform;
- (struct CGAffineTransform)transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4;
- (BOOL)verticalFlip;

@end

