//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView;

@interface MKPlatterView : UIView
{
    UIImageView *_iconView;
    UIView *_platterView;
    BOOL _highlighted;
    UIImage *_image;
    UIColor *_imageTintColor;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;

- (void).cxx_destruct;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
