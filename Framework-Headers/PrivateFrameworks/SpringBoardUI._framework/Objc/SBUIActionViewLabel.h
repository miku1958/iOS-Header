//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SBUIActionViewLabel : UIView
{
    NSString *_text;
    UIColor *_textColor;
    UILabel *_label;
    UILabel *_emojiLabel;
}

@property (strong, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;

- (void).cxx_destruct;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mt_applyVibrantStyling:(id)arg1;
- (void)mt_removeAllVibrantStyling;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

