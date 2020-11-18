//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CoreSuggestionsUI/SGUIEventsAndContactsTableViewControllerDelegate-Protocol.h>
#import <CoreSuggestionsUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableSet, NSString, SGUISuggestionConfirmationController, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SGRealtimeSuggestion, SGUIBannerViewDelegate;

@interface SGUIBannerView : UIView <UIPopoverPresentationControllerDelegate, SGUIEventsAndContactsTableViewControllerDelegate>
{
    SGUISuggestionConfirmationController *_confirmationController;
    NSMutableSet *_doneSuggestions;
    NSArray *_singleBannerImageConstraints;
    NSArray *_multipleBannerImageConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_detailsBaselineConstraint;
    NSLayoutConstraint *_imageCenterYConstraint;
    id<SGRealtimeSuggestion> _suggestionBeingConfirmed;
    id<SGUIBannerViewDelegate> _delegate;
    UIButton *_closeButton;
    UILabel *_detailsLabel;
    UILabel *_titleLabel;
    UIImageView *_bannerImageView;
    UIImageView *_secondaryBannerImageView;
    UIImageView *_disclosureImageView;
    NSArray *_orderedSuggestions;
}

@property (readonly, copy, nonatomic) UIImage *bannerImage;
@property (strong, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property (strong, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property (readonly, copy, nonatomic) NSArray *currentSuggestionGroup;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SGUIBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property (readonly, copy, nonatomic) UIImage *disclosureImage;
@property (strong, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *orderedSuggestions; // @synthesize orderedSuggestions=_orderedSuggestions;
@property (readonly, copy, nonatomic) UIImage *secondaryBannerImage;
@property (strong, nonatomic) UIImageView *secondaryBannerImageView; // @synthesize secondaryBannerImageView=_secondaryBannerImageView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)_calendarImage;
+ (id)_cancelImage;
+ (id)_contactsImage;
+ (id)_disclosureChevronImage:(BOOL)arg1;
+ (id)bannerViewForEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
+ (id)bannerViewForSuggestions:(id)arg1;
+ (double)imageCenterOffsetFromTitleBaselineConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (id)subtitleFont;
+ (id)titleFont;
+ (double)topMarginConstant;
- (void).cxx_destruct;
- (void)_confirmCurrentSuggestion;
- (void)_confirmSuggestion:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_dismissBannerRejectSuggestion:(BOOL)arg1;
- (void)_dismissPresentedViewController:(id)arg1;
- (void)_dismissViewControllerAnimated:(BOOL)arg1;
- (id)_filterRealtimeSuggestions:(id)arg1 forClass:(Class)arg2;
- (id)_findSuggestionsOfClass:(Class)arg1;
- (void)_hideMe;
- (void)_installLayoutConstraints;
- (void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2;
- (void)_presentModalViewControllerFromButton:(id)arg1;
- (id)_presentedControllerCancelButtonItem;
- (id)_presentedControllerDoneButtonItem;
- (id)_presentingViewController;
- (void)_setupViews;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_update;
- (void)_updateUI;
- (id)addButtonTitle;
- (BOOL)areMultipleSuggestionsPresent;
- (void)confirmContactSuggestion;
- (void)confirmEventSuggestion;
- (void)controller:(id)arg1 doneWithSuggestion:(id)arg2;
- (id)disclosureImagePressed;
- (void)dismissBanner:(id)arg1;
- (id)initWithEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSuggestions:(id)arg1;
- (unsigned long long)numberOfSuggestions;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverSourceView;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)updateFonts;

@end
