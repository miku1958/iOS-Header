//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUI)
+ (id)pu_PhotosUIImageNamed:(id)arg1;
+ (id)pu_centeredImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3;
+ (id)pu_imageFromView:(id)arg1 isOpaque:(BOOL)arg2;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8 inset:(struct CGPoint)arg9;
+ (id)pu_imageWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 fillColor:(id)arg4 strokeColor:(id)arg5 cornerRadius:(double)arg6;
- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 contentMode:(long long)arg3 asynchronously:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (id)pu_overlayedImageWithColor:(id)arg1;
- (id)pu_tintedImageWithColor:(id)arg1;
@end

