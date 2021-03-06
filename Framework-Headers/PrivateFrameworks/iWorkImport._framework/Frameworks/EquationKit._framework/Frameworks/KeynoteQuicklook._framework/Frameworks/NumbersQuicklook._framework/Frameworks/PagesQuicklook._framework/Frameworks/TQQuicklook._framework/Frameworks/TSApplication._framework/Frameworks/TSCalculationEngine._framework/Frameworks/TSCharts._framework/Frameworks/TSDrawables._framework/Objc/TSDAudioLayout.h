//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDMediaLayout.h>

@class TSDMovieInfo;

@interface TSDAudioLayout : TSDMediaLayout
{
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

+ (struct CGSize)scaledAudioSize;
- (struct CGRect)alignmentFrame;
- (BOOL)allowsConnections;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canFlip;
- (struct CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (struct CGRect)frameForCullingWithBaseFrame:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (id)initWithInfo:(id)arg1;
- (id)layoutGeometryFromInfo;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)shouldDisplayGuides;
- (BOOL)supportsRotation;
- (id)visibleGeometries;
- (int)wrapType;

@end

