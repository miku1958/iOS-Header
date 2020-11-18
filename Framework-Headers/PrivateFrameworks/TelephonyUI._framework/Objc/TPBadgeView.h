//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TPBadgeView : TPView
{
    unsigned long long _theme;
    NSString *_title;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelBottomAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTopAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorLayoutConstraint;
}

@property (nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelBottomAnchorLayoutConstraint; // @synthesize titleLabelBottomAnchorLayoutConstraint=_titleLabelBottomAnchorLayoutConstraint;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint; // @synthesize titleLabelLeadingAnchorLayoutConstraint=_titleLabelLeadingAnchorLayoutConstraint;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelTopAnchorLayoutConstraint; // @synthesize titleLabelTopAnchorLayoutConstraint=_titleLabelTopAnchorLayoutConstraint;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint; // @synthesize titleLabelTrailingAnchorLayoutConstraint=_titleLabelTrailingAnchorLayoutConstraint;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)loadConstraints;
- (void)updateFonts;
- (void)updateTheme;

@end

