//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDSwatchRenderingOperation.h>

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation
{
    int mShapeType;
    double mAngle;
}

- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 documentRoot:(id)arg6;
- (BOOL)needsPressedStateBackground;
- (struct UIEdgeInsets)swatchEdgeInsets;

@end

