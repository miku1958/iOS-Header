//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUICore)

@property (readonly, nonatomic) struct CGSize px_pixelSize;

+ (id)_px_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;
+ (id)px_PhotosUICoreImageNamed:(id)arg1;
+ (id)px_imageFromSolidColor:(id)arg1;
+ (id)px_playOverlayImage:(unsigned long long)arg1;
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;
- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1;
- (void)px_drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint)arg1 inViewportWithSize:(struct CGSize)arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect)arg4 asynchronously:(BOOL)arg5 handler:(CDUnknownBlockType)arg6;
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)px_imageByCroppingRect:(struct CGRect)arg1;
- (id)px_imageByCroppingRect:(struct CGRect)arg1 pixelTargetSize:(struct CGSize)arg2 round:(BOOL)arg3;
- (id)px_imageWithDebugRect:(struct CGRect)arg1;
- (BOOL)px_isLargerThan:(id)arg1;
- (id)px_tintedImageWithColor:(id)arg1;
@end
