//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface SKUIProductPagePlaceholderView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_textColor;
}

@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

- (void).cxx_destruct;
- (id)initWithPlaceholderString:(id)arg1 isPad:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

