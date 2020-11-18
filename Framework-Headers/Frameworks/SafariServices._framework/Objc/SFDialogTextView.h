//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSParagraphStyle, NSString, UIFont, UITextView;

__attribute__((visibility("hidden")))
@interface SFDialogTextView : UIView
{
    NSString *_title;
    NSString *_message;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIFont *_messageFontWithTitle;
    NSParagraphStyle *_titleParagraphStyle;
    UITextView *_textView;
    double _preferredMaxLayoutWidth;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
}

- (void).cxx_destruct;
- (void)_updateFontStyling;
- (void)_updateText;
- (void)flashScrollIndicators;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setTitle:(id)arg1;

@end

