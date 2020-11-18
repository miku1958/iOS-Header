//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CardKit/INUIRemoteViewControllerDelegate-Protocol.h>
#import <CardKit/SFFeedbackListener-Protocol.h>
#import <CardKit/SearchUIFeedbackDelegate-Protocol.h>

@class CRKOverlayButton, INUIRemoteViewController, NSArray, NSString, UIView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControllerDataSource, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <INUIRemoteViewControllerDelegate, SearchUIFeedbackDelegate, SFFeedbackListener>
{
    CRKOverlayButton *_overlayButton;
    BOOL _loading;
    BOOL _active;
    BOOL _compressed;
    INUIRemoteViewController *_remoteViewController;
    id<CRKCardSectionViewControllerDelegate> _delegate;
    id<CRKCardSectionViewControllerDataSource> _dataSource;
    id<CRCardSection> _cardSection;
    NSArray *_extraCommands;
}

@property (readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (strong, nonatomic) id<CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property (nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property (weak, nonatomic) id<CRKCardSectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKCardSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // @synthesize extraCommands=_extraCommands;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView<CRKCardSectionView> *view; // @dynamic view;

+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2;
+ (void)registerCardSectionViewController;
- (void).cxx_destruct;
- (void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2;
- (id)_backingCardSection;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (void)_cancelTouchesIfNecessary;
- (BOOL)_checkIfCardSectionIsNull:(id)arg1;
- (id)_commands;
- (void)_createAndSetSearchUIView;
- (id)_destinationPunchout;
- (BOOL)_expectsSearchUIView;
- (void)_finishLoadingViewIfNecessary;
- (id)_generateCardSectionViewAppearanceFeedback;
- (BOOL)_hasCorrespondingSearchUIView;
- (id)_initWithCardSection:(id)arg1 dataSource:(id)arg2;
- (id)_interaction;
- (BOOL)_isIndicatingActivity;
- (BOOL)_isLoadedWithIntentsUIView;
- (void)_loadCardSectionView;
- (id)_parameters;
- (void)_performCommand:(id)arg1;
- (id)_preferredPunchoutCommand;
- (void)_resumeTouchesIfNecessary;
- (void)_setViewExternally:(id)arg1;
- (void)_setupCardSectionButtons;
- (BOOL)_setupWithDataSource:(id)arg1;
- (BOOL)_shouldAttemptToConnectToRemoteViewController;
- (BOOL)_shouldHideButtonOverlay;
- (BOOL)_shouldRenderButtonOverlay;
- (id)_unhandledParameters;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (unsigned long long)crk_intrinsicInteractiveBehavior;
- (void)didEngageCardSection:(id)arg1;
- (void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)interfaceSectionsForRemoteViewController:(id)arg1;
- (void)loadView;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

