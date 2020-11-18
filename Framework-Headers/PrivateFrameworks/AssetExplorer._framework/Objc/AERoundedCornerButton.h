//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface AERoundedCornerButton : UIControl
{
    long long __layoutStyle;
    long long __buttonType;
    UILabel *__label;
    UIImageView *__imageView;
}

@property (readonly, nonatomic) long long _buttonType; // @synthesize _buttonType=__buttonType;
@property (strong, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property (strong, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property (nonatomic, setter=_setLayoutStyle:) long long _layoutStyle; // @synthesize _layoutStyle=__layoutStyle;

+ (id)roundedCornerButtonWithStyle:(long long)arg1 buttonType:(long long)arg2;
- (void).cxx_destruct;
- (void)_commonAERoundedCornerButtonInitializationWithStyle:(long long)arg1 buttonType:(long long)arg2;
- (double)_interpolatedGlyphHorizontalInset;
- (double)_interpolatedGlyphTopInset;
- (void)layoutSubviews;

@end

