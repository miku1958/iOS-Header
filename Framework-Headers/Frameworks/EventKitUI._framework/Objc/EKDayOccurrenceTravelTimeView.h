//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, UIColor, UIImageView, UILabel;
@protocol EKDayOccurrenceTravelTimeViewMetricsDelegate;

@interface EKDayOccurrenceTravelTimeView : UIView
{
    BOOL _selected;
    BOOL _animatingAlpha;
    id<EKDayOccurrenceTravelTimeViewMetricsDelegate> _delegate;
    UIColor *_elementColor;
    UIColor *_lineColor;
    long long _occurrenceBackgroundStyle;
    long long _routingMode;
    double _hairlineYPosition;
    UIImageView *_travelTimeIcon;
    UILabel *_travelTimeLabel;
    UIView *_horizontalLineView;
    NSLayoutConstraint *_iconWidth;
    NSLayoutConstraint *_iconHeight;
    NSLayoutConstraint *_leadingHorizontalPad;
    NSLayoutConstraint *_trailingHorizontalPad;
    NSArray *_constraints;
}

@property BOOL animatingAlpha; // @synthesize animatingAlpha=_animatingAlpha;
@property (strong) NSArray *constraints; // @synthesize constraints=_constraints;
@property (weak, nonatomic) id<EKDayOccurrenceTravelTimeViewMetricsDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIColor *elementColor; // @synthesize elementColor=_elementColor;
@property (nonatomic) double hairlineYPosition; // @synthesize hairlineYPosition=_hairlineYPosition;
@property (strong) UIView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property (strong) NSLayoutConstraint *iconHeight; // @synthesize iconHeight=_iconHeight;
@property (strong) NSLayoutConstraint *iconWidth; // @synthesize iconWidth=_iconWidth;
@property (strong) NSLayoutConstraint *leadingHorizontalPad; // @synthesize leadingHorizontalPad=_leadingHorizontalPad;
@property (strong, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property (nonatomic) long long occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property (nonatomic) long long routingMode; // @synthesize routingMode=_routingMode;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (strong) NSLayoutConstraint *trailingHorizontalPad; // @synthesize trailingHorizontalPad=_trailingHorizontalPad;
@property (strong) UIImageView *travelTimeIcon; // @synthesize travelTimeIcon=_travelTimeIcon;
@property (strong) UILabel *travelTimeLabel; // @synthesize travelTimeLabel=_travelTimeLabel;
@property (copy, nonatomic) NSAttributedString *travelTimeString;

+ (void)initialize;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2;
- (void).cxx_destruct;
- (double)_iconScale;
- (struct UIEdgeInsets)_parentPadding;
- (id)_textFont;
- (id)_travelTimeIconForTravelModeWithColor:(id)arg1;
- (void)_updateStringsColorsAndConstraintConstants;
- (double)alphaForElements;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReusableTravelTimeView:(id)arg1;
- (void)layoutSubviews;

@end

