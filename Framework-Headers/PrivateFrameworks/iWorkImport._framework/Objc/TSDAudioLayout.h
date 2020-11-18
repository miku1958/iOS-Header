//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaLayout.h>

@class TSDMovieInfo;

__attribute__((visibility("hidden")))
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
- (struct CGRect)frameForCulling;
- (id)initWithInfo:(id)arg1;
- (id)layoutGeometryFromInfo;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)shouldDisplayGuides;
- (BOOL)supportsRotation;
- (id)visibleGeometries;
- (int)wrapType;

@end

