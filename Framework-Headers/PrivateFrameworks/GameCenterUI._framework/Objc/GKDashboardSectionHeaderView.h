//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface GKDashboardSectionHeaderView : UICollectionReusableView
{
    BOOL _onDarkBackground;
    UILabel *_titleLabel;
    NSLayoutConstraint *_leftMarginConstraint;
    UIColor *_titleColor;
    NSLayoutConstraint *_rightMarginConstraint;
}

@property (copy, nonatomic) UIFont *font; // @dynamic font;
@property (nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property (nonatomic) BOOL onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (strong, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property (nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (double)defaultHeight;
+ (struct CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2;
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (struct CGSize)intrinsicContentSize;

@end

