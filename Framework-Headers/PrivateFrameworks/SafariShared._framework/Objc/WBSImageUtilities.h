//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSImageUtilities : NSObject
{
}

+ (id)_decodeHelperConnection;
+ (id)_pixelDataForImage:(id)arg1;
+ (void)decodeImageData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)flatImage:(id)arg1 withColor:(id)arg2;
+ (BOOL)image:(id)arg1 isEqualToImage:(id)arg2;
+ (struct CGSize)imageSizeScalingSize:(struct CGSize)arg1 proportionallyToFitSize:(struct CGSize)arg2;
+ (id)resizedImage:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)squareThumbnailImageFromImage:(id)arg1 thumbnailWidthInPixels:(double)arg2;

@end

