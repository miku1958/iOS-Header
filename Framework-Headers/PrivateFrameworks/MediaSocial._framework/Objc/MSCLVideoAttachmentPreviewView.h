//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface MSCLVideoAttachmentPreviewView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    CAGradientLayer *_overlayLayer;
}

- (void).cxx_destruct;
- (id)initWithAttachment:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
