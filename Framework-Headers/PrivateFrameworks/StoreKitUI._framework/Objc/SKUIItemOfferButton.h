//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <StoreKitUI/SKUIViewElementOfferButton-Protocol.h>

@class NSMutableAttributedString, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, SKUICircleProgressIndicator, SKUIFocusedTouchGestureRecognizer, UIColor, UIImage, UIImageView, UILabel, UIView;
@protocol SKUIItemOfferButtonDelegate;

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton>
{
    UIColor *_backgroundColor;
    BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImage *_cloudImage;
    UIColor *_cloudTintColor;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    long long _confirmationTitleStyle;
    struct CGSize _confirmationTitleFitSize;
    id<SKUIItemOfferButtonDelegate> _delegate;
    long long _fillStyle;
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_borderedImageView;
    double _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    BOOL _showsConfirmationState;
    NSMutableAttributedString *_titleAttributedString;
    struct CGSize _titleFitSize;
    UILabel *_titleLabel;
    long long _titleStyle;
    BOOL _universal;
    BOOL _usesDrawRectPath;
    UIImageView *_universalImageView;
    BOOL _downloadRestores;
    NSString *_offerButtonStateDescription;
    BOOL _disabledButSelectable;
    UIImage *_borderedImage;
    CDUnknownBlockType _centerImageProvider;
    double _borderColorAlphaMultiplier;
    SKUIBuyButtonDescriptor *_buttonDescriptor;
    NSString *_buyType;
    SKUIButtonViewElement *_element;
}

@property (nonatomic) double borderColorAlphaMultiplier; // @synthesize borderColorAlphaMultiplier=_borderColorAlphaMultiplier;
@property (strong, nonatomic) UIImage *borderedImage; // @synthesize borderedImage=_borderedImage;
@property (strong, nonatomic) SKUIBuyButtonDescriptor *buttonDescriptor; // @synthesize buttonDescriptor=_buttonDescriptor;
@property (copy, nonatomic) NSString *buyType; // @synthesize buyType=_buyType;
@property (copy, nonatomic) CDUnknownBlockType centerImageProvider; // @synthesize centerImageProvider=_centerImageProvider;
@property (copy, nonatomic) UIColor *cloudTintColor; // @synthesize cloudTintColor=_cloudTintColor;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (nonatomic) long long confirmationTitleStyle; // @synthesize confirmationTitleStyle=_confirmationTitleStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIItemOfferButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property (strong, nonatomic) SKUIButtonViewElement *element; // @synthesize element=_element;
@property (nonatomic) long long fillStyle; // @synthesize fillStyle=_fillStyle;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image;
@property (weak, nonatomic) id<SKUIItemOfferButtonDelegate> itemOfferDelegate;
@property (readonly, nonatomic) NSString *offerButtonStateDescription;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (nonatomic) long long progressType;
@property (readonly, nonatomic) BOOL restores;
@property (readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property (nonatomic) BOOL showsConfirmationState; // @synthesize showsConfirmationState=_showsConfirmationState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPlayButton;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property (nonatomic, getter=isUniversal) BOOL universal; // @synthesize universal=_universal;

+ (id)_basicAnimationWithKeyPath:(id)arg1;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6 interfaceStyle:(long long)arg7;
+ (id)_defaultTitleAttributes;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6;
+ (id)_imageForProgressType:(long long)arg1;
+ (struct UIEdgeInsets)_imageInsetsForProgressType:(long long)arg1;
+ (BOOL)_sizeMattersForTitleStyle:(long long)arg1;
+ (struct CGSize)_titleSizeThatFitsForSize:(struct CGSize)arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (BOOL)canOpenItemForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2;
+ (id)cloudTintColorForBackgroundColor:(id)arg1;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)playHighlightImageWithTintColor:(id)arg1;
+ (id)playImageWithTintColor:(id)arg1;
+ (id)playTintColorForBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (struct CGRect)_borderedImageViewFrame;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)_cancelGestureAction:(id)arg1;
- (double)_horizontalInsetForTitleStyle:(long long)arg1;
- (id)_imageForProgressType:(long long)arg1;
- (void)_insertBorderView;
- (void)_insertBorderedImageView;
- (void)_insertCancelGestureRecognizer;
- (void)_insertImageView;
- (void)_insertLabel;
- (void)_insertProgressIndicator;
- (void)_insertUniversalView;
- (void)_reloadForCurrentState:(BOOL)arg1;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_removeCancelGestureRecognizer;
- (void)_sendDidAnimate;
- (void)_sendWillAnimate;
- (BOOL)_touchInBounds:(id)arg1;
- (void)_transitionFromBorderedImage:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateForChangedConfirmationTitleProperty;
- (void)_updateForChangedTitleProperty;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)hasBorderedImage;
- (BOOL)hasNonBorderedImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)layoutSizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)removeButtonStateAnimations;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithAppearance:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (void)setProgressType:(long long)arg1 animated:(BOOL)arg2;
- (void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(BOOL)arg5;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (void)showCloudImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

