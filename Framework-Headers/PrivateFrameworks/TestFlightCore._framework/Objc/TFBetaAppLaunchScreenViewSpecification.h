//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont, UIFontMetrics;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchScreenViewSpecification : NSObject
{
    double _viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
    double _bottommostLabelLastBaselineToLockupTopEdge;
    double _bottommostLabelLastBaselineToImageTopEdge;
    double _buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
    double _buttonHeight;
    double _interButtonPadding;
    double _viewTopMarginToTitleLabelFirstBaseline;
    double _titleLabelLastBaselineToSubtitleLabelFirstBaseline;
    double _lockupBottomEdgeToBodyTitleLabelFirstBaseline;
    double _bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_bodyTitleFont;
    UIFont *_bodyTextFont;
    UIFontMetrics *_titleFontMetrics;
    UIFontMetrics *_subtitleFontMetrics;
    UIFontMetrics *_bodyTitleFontMetrics;
    UIFontMetrics *_bodyTextFontMetrics;
    struct UIEdgeInsets _scrollViewContentLayoutInsets;
    struct UIEdgeInsets _buttonModuleContentLayoutInsets;
}

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIFont *bodyTextFont; // @synthesize bodyTextFont=_bodyTextFont;
@property (readonly, nonatomic) UIFontMetrics *bodyTextFontMetrics; // @synthesize bodyTextFontMetrics=_bodyTextFontMetrics;
@property (readonly, nonatomic) UIFont *bodyTitleFont; // @synthesize bodyTitleFont=_bodyTitleFont;
@property (readonly, nonatomic) UIFontMetrics *bodyTitleFontMetrics; // @synthesize bodyTitleFontMetrics=_bodyTitleFontMetrics;
@property (readonly, nonatomic) double bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline; // @synthesize bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline=_bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
@property (readonly, nonatomic) double bottommostLabelLastBaselineToImageTopEdge; // @synthesize bottommostLabelLastBaselineToImageTopEdge=_bottommostLabelLastBaselineToImageTopEdge;
@property (readonly, nonatomic) double bottommostLabelLastBaselineToLockupTopEdge; // @synthesize bottommostLabelLastBaselineToLockupTopEdge=_bottommostLabelLastBaselineToLockupTopEdge;
@property (readonly, nonatomic) double buttonBackgroundTopEdgeToPrimaryButtonTopEdge; // @synthesize buttonBackgroundTopEdgeToPrimaryButtonTopEdge=_buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
@property (readonly, nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property (readonly, nonatomic) struct UIEdgeInsets buttonModuleContentLayoutInsets; // @synthesize buttonModuleContentLayoutInsets=_buttonModuleContentLayoutInsets;
@property (readonly, nonatomic) UIColor *buttonTintColor;
@property (readonly, nonatomic) double interButtonPadding; // @synthesize interButtonPadding=_interButtonPadding;
@property (readonly, nonatomic) double lockupBottomEdgeToBodyTitleLabelFirstBaseline; // @synthesize lockupBottomEdgeToBodyTitleLabelFirstBaseline=_lockupBottomEdgeToBodyTitleLabelFirstBaseline;
@property (readonly, nonatomic) UIColor *overButtonTintTextColor;
@property (readonly, nonatomic) double primaryButtonCornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets scrollViewContentLayoutInsets; // @synthesize scrollViewContentLayoutInsets=_scrollViewContentLayoutInsets;
@property (readonly, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property (readonly, nonatomic) UIFontMetrics *subtitleFontMetrics; // @synthesize subtitleFontMetrics=_subtitleFontMetrics;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property (readonly, nonatomic) UIFontMetrics *titleFontMetrics; // @synthesize titleFontMetrics=_titleFontMetrics;
@property (readonly, nonatomic) double titleLabelLastBaselineToSubtitleLabelFirstBaseline; // @synthesize titleLabelLastBaselineToSubtitleLabelFirstBaseline=_titleLabelLastBaselineToSubtitleLabelFirstBaseline;
@property (readonly, nonatomic) double viewTopMarginAdditionalPaddingAsFractionOfTotalHeight; // @synthesize viewTopMarginAdditionalPaddingAsFractionOfTotalHeight=_viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
@property (readonly, nonatomic) double viewTopMarginToTitleLabelFirstBaseline; // @synthesize viewTopMarginToTitleLabelFirstBaseline=_viewTopMarginToTitleLabelFirstBaseline;

- (void).cxx_destruct;
- (id)_bodyTextFontStyle;
- (id)_bodyTitleFontStyle;
- (id)_createBodyTextFontForTraitCollection:(id)arg1;
- (id)_createBodyTitleFontForTraitCollection:(id)arg1;
- (id)_createSubtitleFontForTraitCollection:(id)arg1;
- (id)_createTitleFontForTraitCollection:(id)arg1;
- (id)_subtitleFontStyle;
- (id)_titleFontStyle;
- (id)initWithTraitCollection:(id)arg1;

@end

