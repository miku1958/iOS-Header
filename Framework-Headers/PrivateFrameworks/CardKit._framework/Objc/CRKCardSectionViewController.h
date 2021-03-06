//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CardKit/CRKCardSectionViewControllingDelegate-Protocol.h>
#import <CardKit/CRKEventResponding-Protocol.h>
#import <CardKit/CRKFeedbackDelegate-Protocol.h>
#import <CardKit/SFFeedbackListener-Protocol.h>

@class CRKCardSectionViewConfiguration, CRKOverlayButton, INUIRemoteViewController, NSArray, NSString, UIView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding>
{
    CRKOverlayButton *_overlayButton;
    BOOL _childVCDesiresInteractivity;
    BOOL _loading;
    id<CRKCardSectionViewControllerDelegate> _delegate;
    id<CRCardSection> _cardSection;
    NSArray *_extraCommands;
    INUIRemoteViewController *__remoteViewController;
    CRKCardSectionViewConfiguration *_viewConfiguration;
}

@property (readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController=__remoteViewController;
@property (strong, nonatomic) id<CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKCardSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // @synthesize extraCommands=_extraCommands;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView<CRKCardSectionView> *view; // @dynamic view;
@property (weak, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration; // @synthesize viewConfiguration=_viewConfiguration;

+ (void)_registerWithCardKit;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1;
+ (id)cardSectionViewControllerForViewConfiguration:(id)arg1;
+ (void)registerCardSectionViewController;
- (void).cxx_destruct;
- (id)_backingCardSection;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)_cancelTouchesIfNecessary;
- (void)_cardSectionTapped;
- (BOOL)_checkIfCardSectionIsNull:(id)arg1;
- (id)_commands;
- (id)_destinationPunchout;
- (BOOL)_expectsSearchUIView;
- (void)_finishLoadingViewIfNecessary;
- (id)_generateCardSectionViewAppearanceFeedback;
- (BOOL)_hasCorrespondingSearchUIView;
- (id)_initWithCardSection:(id)arg1;
- (BOOL)_isIndicatingActivity;
- (BOOL)_isLoadedWithIntentsUIView;
- (void)_loadCardSectionView;
- (void)_performAllCommands;
- (void)_performCommand:(id)arg1;
- (id)_preferredPunchoutCommand;
- (void)_resumeTouchesIfNecessary;
- (void)_setViewExternally:(id)arg1;
- (void)_setupCardSectionButtons;
- (BOOL)_shouldHideButtonOverlay;
- (BOOL)_shouldRenderButtonOverlay;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (void)didEngageCardSection:(id)arg1;
- (void)loadView;
- (BOOL)performCommand:(id)arg1 forViewController:(id)arg2;
- (void)presentViewController:(id)arg1;
- (BOOL)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDismissViewController:(id)arg1;

@end

