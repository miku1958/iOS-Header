//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CardKit/CRKCardSectionViewControllerDataSource-Protocol.h>
#import <CardKit/CRKCardSectionViewControllerDelegate-Protocol.h>
#import <CardKit/CRKCardSectionViewProviderDelegate-Protocol.h>
#import <CardKit/CRKCardViewControlling-Protocol.h>

@class CRKComposedStackView, NSMapTable, NSMutableArray, NSString;
@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardSectionViewControllerDataSource, CRKCardViewControlling>
{
    NSMutableArray *_cardSectionViewControllers;
    NSMapTable *_cardSectionsToCardSectionViewControllersMapTable;
    NSMapTable *_handledParametersForInteraction;
    NSMutableArray *_pendingDismissalCommands;
    BOOL _loaded;
    id<CRKCardSectionViewSourcing> _builtInCardSectionViewProviderManager;
    NSMutableArray *_loadingCardSections;
    BOOL _indicatingActivity;
    BOOL _loadBundles;
    id<CRCard> _card;
    id<CRKCardViewControllerDelegate> _cardViewControllerDelegate;
    id<CRKCardSectionViewSourcing> _cardSectionViewSource;
    long long _preferredPunchoutIndex;
}

@property (strong, nonatomic) id<CRCard> card; // @synthesize card=_card;
@property (strong, nonatomic) id<CRKCardSectionViewSourcing> cardSectionViewSource; // @synthesize cardSectionViewSource=_cardSectionViewSource;
@property (weak, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; // @synthesize cardViewControllerDelegate=_cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKCardViewControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isIndicatingActivity) BOOL indicatingActivity; // @synthesize indicatingActivity=_indicatingActivity;
@property (nonatomic) BOOL loadBundles; // @synthesize loadBundles=_loadBundles;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property (readonly) Class superclass;
@property (strong, nonatomic) CRKComposedStackView *view; // @dynamic view;

+ (void)_registerCardSectionViewControllers;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;
- (BOOL)_askDelegateToPerformReferentialCommand:(id)arg1;
- (void)_cancelTouchesIfNecessary;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;
- (void)_finishLoading;
- (BOOL)_fireAndForgetOutboundCommand:(id)arg1;
- (id)_generateCardViewAppearanceFeedback;
- (id)_initWithCard:(id)arg1;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadBundles:(BOOL)arg3 loadProvidersImmediately:(BOOL)arg4;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(BOOL)arg3;
- (BOOL)_isActuallyVisible;
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;
- (void)_loadCardSectionViewControllersFromCard:(id)arg1 currentSourceInvalid:(BOOL)arg2;
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;
- (void)_resumeTouchesIfNecessary;
- (void)_setCard:(id)arg1 loadProvidersImmediately:(BOOL)arg2;
- (void)_setCardWithLoadedBundles:(id)arg1 loadProvidersImmediately:(BOOL)arg2;
- (struct CGSize)boundingSizeForCardSectionViewController:(id)arg1;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (id)cardSectionViewController:(id)arg1 interactionWithIdentifier:(id)arg2;
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (double)contentHeightForWidth:(double)arg1;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCard:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (struct CGSize)preferredContentSize;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

