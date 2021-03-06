//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMPanoramaUtilities : NSObject
{
}

+ (struct CGSize)bufferSize;
+ (struct CGSize)defaultPreviewSize;
+ (struct UIEdgeInsets)panoramaViewLayoutInsetsForLayoutStyle:(long long)arg1;
+ (struct UIEdgeInsets)panoramaViewPreviewStripInsetsForLayoutStyle:(long long)arg1;
+ (struct CGSize)panoramaViewSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct CGSize)previewStripSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (double)singlePreviewFrameWidthForPreviewHeight:(double)arg1;

@end

