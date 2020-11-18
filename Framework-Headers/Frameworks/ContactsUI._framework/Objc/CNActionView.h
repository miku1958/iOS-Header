//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIFont, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNActionViewDelegate, CNActionViewTemplateImage;

@interface CNActionView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _disabled;
    BOOL _highlighted;
    id<CNActionViewDelegate> _actionDelegate;
    UIImage *_image;
    NSString *_title;
    NSString *_type;
    long long _style;
    UIView *_platterView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSArray *_activatedContstrants;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    id<CNActionViewTemplateImage> _templateImage;
    UIFont *_titleFont;
}

@property (weak, nonatomic) id<CNActionViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property (strong, nonatomic) NSArray *activatedContstrants; // @synthesize activatedContstrants=_activatedContstrants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property (nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (strong, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property (strong, nonatomic) id<CNActionViewTemplateImage> templateImage; // @synthesize templateImage=_templateImage;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;

+ (id)borderColorForDisabledBoldState;
+ (id)colorByIncreasingBrightnessComponentByPercentage:(double)arg1 ofColor:(id)arg2;
+ (id)contentColorForDisabledBoldState;
+ (id)contentColorForDisabledVibrantDarkState;
+ (id)defaultTitleFont;
+ (id)defaultTitleFontOfSize:(double)arg1;
+ (void)fadeInView:(id)arg1;
- (void).cxx_destruct;
- (id)colorByAdjustingColorToHighlightState:(id)arg1;
- (void)didMoveToWindow;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHighlightGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)intrinsicContentWidth;
- (void)layoutSubviews;
- (struct CGRect)rectForPlatterView;
- (struct CGRect)rectForTitleLabelForFont:(id)arg1 fittingSize:(struct CGSize)arg2;
- (void)setDisabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)tintColorDidChange;
- (void)updateImageViewStateAnimated:(BOOL)arg1;
- (void)updateLabelStateAnimated:(BOOL)arg1;
- (void)updatePlatterViewStateAnimated:(BOOL)arg1;

@end

