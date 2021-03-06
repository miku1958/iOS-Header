//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKTitledBuddyHeaderViewDelegate-Protocol.h>

@class HKTitledLogoBuddyHeaderView, NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIStackView, UIVisualEffectView;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate>
{
    UIScrollView *_scrollView;
    UIStackView *_bodyStackView;
    UIVisualEffectView *_anchoredButtonContainerView;
    UIStackView *_containerStackView;
    HKTitledLogoBuddyHeaderView *_header;
    NSArray *_buttons;
    NSArray *_buttonStackConstraints;
    UIActivityIndicatorView *_loadingIndicator;
}

@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property (readonly) Class superclass;

+ (id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets)arg2;
- (void).cxx_destruct;
- (void)_anchoredButtonTapped:(id)arg1;
- (void)_createAnchoredButtons;
- (id)_createHeaderView;
- (void)_updateForCurrentSizeCategory;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)headerView;
- (id)init;
- (void)linkButtonTapped:(id)arg1;
- (id)linkButtonTitle;
- (void)reloadViews;
- (BOOL)shouldCustomizeNavigationBar;
- (BOOL)shouldHideNavigationBar;
- (id)subsequentViews;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleImage;
- (id)titleString;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBodyTextAttributesWithMutableString:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

