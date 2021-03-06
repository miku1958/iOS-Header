//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDiscoveryShelfView.h>

@class PKDiscoveryInlineMediaCaptionView, PKDiscoveryInlineMediaShelf, PKDiscoveryMedia, UIImageView, UIView;

@interface PKDiscoveryInlineMediaShelfView : PKDiscoveryShelfView
{
    PKDiscoveryInlineMediaShelf *_shelf;
    PKDiscoveryMedia *_media;
    UIView *_imageContainerView;
    UIImageView *_imageView;
    PKDiscoveryInlineMediaCaptionView *_captionView;
    BOOL _isInline;
    double _leadingSpace;
}

- (void).cxx_destruct;
- (void)_loadImageFromBundle;
- (void)_loadImageFromFileURL;
- (id)initWithShelf:(id)arg1;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets)arg1;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

