//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <AppStoreComponents/ASCAdLockupPresenterView-Protocol.h>
#import <AppStoreComponents/ASCLockupPresenterView-Protocol.h>
#import <AppStoreComponents/ASCOfferButtonDelegate-Protocol.h>
#import <AppStoreComponents/ASCOfferPresenterView-Protocol.h>

@class ASCAdTransparencyButtonView, ASCArtworkView, ASCEditorsChoiceView, ASCOfferButton, ASCOfferTheme, ASCSkeletonLabel, ASCStarRatingView, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface ASCAdLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCAdLockupPresenterView, ASCOfferPresenterView>
{
    BOOL _adMarkerHidden;
    ASCOfferTheme *_offerTheme;
    NSString *_size;
    ASCArtworkView *_iconArtworkView;
    ASCSkeletonLabel *_titleLabel;
    ASCSkeletonLabel *_subtitleLabel;
    ASCAdTransparencyButtonView *_adTransparencyButton;
    ASCStarRatingView *_starRatingView;
    UILabel *_userRatingLabel;
    ASCOfferButton *_offerButton;
    ASCEditorsChoiceView *_editorsChoiceView;
    ASCSkeletonLabel *_descriptionLabel;
    UILabel *_headingLabelIfLoaded;
    UILabel *_offerStatusLabelIfLoaded;
}

@property (nonatomic, getter=isAdMarkerHidden) BOOL adMarkerHidden; // @synthesize adMarkerHidden=_adMarkerHidden;
@property (readonly, nonatomic) ASCAdTransparencyButtonView *adTransparencyButton; // @synthesize adTransparencyButton=_adTransparencyButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASCSkeletonLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (readonly, nonatomic) ASCEditorsChoiceView *editorsChoiceView; // @synthesize editorsChoiceView=_editorsChoiceView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded; // @synthesize headingLabelIfLoaded=_headingLabelIfLoaded;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView; // @synthesize iconArtworkView=_iconArtworkView;
@property (copy, nonatomic) UIColor *loadingColor;
@property (readonly, nonatomic) ASCOfferButton *offerButton; // @synthesize offerButton=_offerButton;
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // @synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded;
@property (copy, nonatomic) ASCOfferTheme *offerTheme; // @synthesize offerTheme=_offerTheme;
@property (readonly, nonatomic) struct CGSize preferredIconSize;
@property (strong, nonatomic) NSString *size; // @synthesize size=_size;
@property (readonly, nonatomic) ASCStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic) UILabel *userRatingLabel; // @synthesize userRatingLabel=_userRatingLabel;

+ (id)descriptionLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (void).cxx_destruct;
- (void)addAdTransparencyTarget:(id)arg1 action:(SEL)arg2;
- (void)addOfferTarget:(id)arg1 action:(SEL)arg2;
- (void)beginOfferModalStateWithCancelBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endOfferModalState;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (id)makeLayout;
- (void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3;
- (void)removeAdTransparencyTarget:(id)arg1 action:(SEL)arg2;
- (void)removeOfferTarget:(id)arg1 action:(SEL)arg2;
- (id)saveOfferState;
- (void)setAdTranparencyButtonHidden:(BOOL)arg1;
- (void)setEditorsChoice:(BOOL)arg1;
- (void)setHeading:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconImage:(id)arg1 withDecoration:(id)arg2;
- (void)setLoading:(BOOL)arg1;
- (void)setOfferEnabled:(BOOL)arg1;
- (void)setOfferInteractive:(BOOL)arg1;
- (void)setOfferMetadata:(id)arg1;
- (void)setOfferStatus:(id)arg1;
- (void)setPrefersRightToLeftLayout:(BOOL)arg1;
- (void)setProductDescription:(id)arg1;
- (void)setProductRating:(float)arg1;
- (void)setProductRatingBadge:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

