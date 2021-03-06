//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/UITableViewDataSource-Protocol.h>
#import <AuthKitUI/UITableViewDelegate-Protocol.h>

@class AKAuthorizationPaneContext, NSLayoutConstraint, NSMutableArray, NSString, UIStackView, UITableView, UIVisualEffectView;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPaneDelegate;

@interface AKAuthorizationPaneViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _isWristDetectionEnabled;
    id<AKAuthorizationPaneDelegate> _paneDelegate;
    id<AKAuthorizationEditableDataSources> _editableDataSources;
    UIStackView *_paneHeaderStackView;
    UIStackView *_paneFooterStackView;
    AKAuthorizationPaneContext *_headerPaneContext;
    AKAuthorizationPaneContext *_footerPaneContext;
    NSMutableArray *_mutableConstraints;
    UITableView *_tableView;
    NSLayoutConstraint *_headerWidthConstraint;
    NSLayoutConstraint *_footerWidthConstraint;
    UIVisualEffectView *_blurryTray;
}

@property (strong, nonatomic) UIVisualEffectView *blurryTray; // @synthesize blurryTray=_blurryTray;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<AKAuthorizationEditableDataSources> editableDataSources; // @synthesize editableDataSources=_editableDataSources;
@property (strong, nonatomic) AKAuthorizationPaneContext *footerPaneContext; // @synthesize footerPaneContext=_footerPaneContext;
@property (readonly, nonatomic) NSLayoutConstraint *footerWidthConstraint; // @synthesize footerWidthConstraint=_footerWidthConstraint;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AKAuthorizationPaneContext *headerPaneContext; // @synthesize headerPaneContext=_headerPaneContext;
@property (readonly, nonatomic) NSLayoutConstraint *headerWidthConstraint; // @synthesize headerWidthConstraint=_headerWidthConstraint;
@property (readonly, nonatomic) BOOL isWristDetectionEnabled; // @synthesize isWristDetectionEnabled=_isWristDetectionEnabled;
@property (strong, nonatomic) NSMutableArray *mutableConstraints; // @synthesize mutableConstraints=_mutableConstraints;
@property (weak, nonatomic) id<AKAuthorizationPaneDelegate> paneDelegate; // @synthesize paneDelegate=_paneDelegate;
@property (readonly, nonatomic) UIStackView *paneFooterStackView; // @synthesize paneFooterStackView=_paneFooterStackView;
@property (readonly, nonatomic) UIStackView *paneHeaderStackView; // @synthesize paneHeaderStackView=_paneHeaderStackView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_adjustForPositionOfScrollView:(id)arg1;
- (void)_configureContentTrayIfNeeded;
- (double)_contentTrayOffsetAdjustedForScrollInset:(BOOL)arg1;
- (double)_deviceSafeAreaBottomInset;
- (id)_indexPathForLastRow;
- (BOOL)_isContentUnderNavigationBar;
- (BOOL)_isContentUnderTray;
- (double)_navigationBarHeaderHeight;
- (id)_newContainerView;
- (id)_newStackView;
- (long long)_safeIndexWithCount:(long long)arg1;
- (void)_setCompressedHeightForView:(id)arg1;
- (void)_setupContexts;
- (BOOL)_shouldEmbedContentTray;
- (void)_updateBlurForTray;
- (double)contentScrollOffset;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (double)intrinsicContentHeight;
- (double)maximumContentHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (void)sizeToFitPaneContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

