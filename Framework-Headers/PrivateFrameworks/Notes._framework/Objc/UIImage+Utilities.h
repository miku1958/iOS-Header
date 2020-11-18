//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Utilities)
+ (id)UIImageFromCIImage:(id)arg1;
+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (struct UIImage *)ic_imageWithContentsOfURL:(id)arg1;
+ (struct UIImage *)imageNamed:(id)arg1 withTint:(struct UIColor *)arg2;
- (struct UIImage *)decodeInBackground;
- (void)decodeWithCompletion:(CDUnknownBlockType)arg1;
- (id)ic_JPEGData;
- (id)ic_PNGData;
- (id)ic_imageDataWithUTType:(id)arg1;
- (struct UIImage *)imageFromRect:(struct CGRect)arg1;
- (struct UIImage *)scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage *)scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage *)scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
@end

