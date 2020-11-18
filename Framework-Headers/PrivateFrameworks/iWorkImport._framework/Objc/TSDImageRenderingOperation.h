//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDSwatchRenderingOperation.h>

@class TSDImageInfo;

__attribute__((visibility("hidden")))
@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation
{
    TSDImageInfo *mImageInfo;
    BOOL mShouldClipVertically;
}

@property (strong) TSDImageInfo *imageInfo; // @synthesize imageInfo=mImageInfo;

- (void).cxx_destruct;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7;

@end

