//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIImage, UIImageView, UILabel;

@interface BFFPaneHeaderView : UIView
{
    UIImageView *_iconView;
    UIButton *_linkButton;
    CDUnknownBlockType _linkHandler;
    UIView *_bottomLine;
    BOOL _useMinimumTopPadding;
    BOOL _textLabelAlignedByLastBaseline;
    UIImage *_icon;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UILabel *_subLabel;
    double _flexibleHeight;
}

@property (strong, nonatomic) UIColor *bottomLineColor;
@property (readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property (nonatomic) double flexibleHeight; // @synthesize flexibleHeight=_flexibleHeight;
@property (strong, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (readonly, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property (readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property (nonatomic, getter=isTextLabelAlignedByLastBaseline) BOOL textLabelAlignedByLastBaseline; // @synthesize textLabelAlignedByLastBaseline=_textLabelAlignedByLastBaseline;
@property (nonatomic) BOOL useMinimumTopPadding; // @synthesize useMinimumTopPadding=_useMinimumTopPadding;

- (void).cxx_destruct;
- (double)_labelsAndLinksBaselineOffsetForView:(id)arg1;
- (void)_linkButtonPressed;
- (double)heightForWidth:(double)arg1 inView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLinkText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setTitleText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

