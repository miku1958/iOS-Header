//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (NCAdditions)
+ (id)nc_animatedImageWithImageSource:(struct CGImageSource *)arg1;
+ (id)nc_imageFromPDFWithFileURL:(id)arg1 size:(struct CGSize)arg2;
+ (id)nc_imageWithPDDocument:(struct CGPDFDocument *)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)nc_loadAnimatedImageGettingSizeForFileURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)nc_alphaOnlyImageForMask;
@end

