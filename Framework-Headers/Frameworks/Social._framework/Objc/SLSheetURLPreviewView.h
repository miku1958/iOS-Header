//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLSheetImagePreviewView.h>

@class SLURLPreviewGenerator, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetURLPreviewView : SLSheetImagePreviewView
{
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

- (void).cxx_destruct;
- (void)_generateAutomaticPreviewForURL:(id)arg1;
- (void)ensurePlaceholderPreviewImage;
- (BOOL)generatePreviewImageFromAttachments;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;

@end

