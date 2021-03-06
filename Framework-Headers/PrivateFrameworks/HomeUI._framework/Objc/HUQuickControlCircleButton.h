//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton
{
    UIColor *_selectedColor;
    UIView *_backgroundView;
    UIColor *_standardBackgroundColor;
}

@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) double fontSize;
@property (strong, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property (strong, nonatomic) UIColor *standardBackgroundColor; // @synthesize standardBackgroundColor=_standardBackgroundColor;

- (void).cxx_destruct;
- (void)_adjustTitleColor;
- (void)_controlStateChanged;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end

