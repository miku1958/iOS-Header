//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject
{
    TSDFrameSpec *mFrameSpec;
    double mAssetScale;
    struct CGSize mSize;
    double mViewScale;
    struct CGImage *mImages[4];
}

@property (nonatomic) double assetScale; // @synthesize assetScale=mAssetScale;
@property (nonatomic) TSDFrameSpec *frameSpec; // @synthesize frameSpec=mFrameSpec;
@property (nonatomic) struct CGSize size; // @synthesize size=mSize;
@property (nonatomic) double viewScale; // @synthesize viewScale=mViewScale;

- (void)dealloc;
- (struct CGImage *)newImageForCALayer:(BOOL)arg1 mask:(BOOL)arg2;
- (void)setImage:(struct CGImage *)arg1 forCALayer:(BOOL)arg2 mask:(BOOL)arg3;

@end

