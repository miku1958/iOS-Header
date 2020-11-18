//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView
{
    BOOL _checked;
    BOOL _disabled;
    UIImageView *_checkmarkImageView;
}

@property (nonatomic) BOOL checked; // @synthesize checked=_checked;
@property (strong, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;

+ (double)borderWidth;
+ (id)grayBorderColor;
- (void).cxx_destruct;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end
