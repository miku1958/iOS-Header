//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDSwatchRenderingOperation.h>

@class TSDPathSource;

__attribute__((visibility("hidden")))
@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation
{
    int mShapeType;
    TSDPathSource *mShapePathSource;
    double mAngle;
}

@property (readonly, nonatomic) double angle; // @synthesize angle=mAngle;

- (void).cxx_destruct;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 shapePathSource:(id)arg6 angle:(double)arg7 documentRoot:(id)arg8;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 shapePathSource:(id)arg6 documentRoot:(id)arg7;
- (BOOL)needsPressedStateBackground;
- (struct UIEdgeInsets)swatchEdgeInsets;

@end

