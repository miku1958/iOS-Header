//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject
{
    TSDImageAdjustments *mImageAdjustments;
}

- (void)dealloc;
- (id)init;
- (id)initWithImageAdjustments:(id)arg1;
- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg1 enhancedImage:(struct CGImage **)arg2;
- (struct CGImage *)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage *)arg2;

@end

