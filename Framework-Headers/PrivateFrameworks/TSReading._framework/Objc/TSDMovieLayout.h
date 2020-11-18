//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaLayout.h>

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout
{
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (void)beginDynamicOperation;
- (struct CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (void)endDynamicOperation;
- (struct CGRect)fullReflectionBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)fullReflectionFrame;
- (id)i_computeWrapPath;
- (id)initWithInfo:(id)arg1;
- (id)layoutGeometryFromInfo;
- (id)movieInfo;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)processChangedProperty:(int)arg1;
- (BOOL)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;

@end

