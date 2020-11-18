//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUItemTableViewController.h>

#import <iTunesStoreUI/ISURLOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SUTermsAndConditionsViewDelegate-Protocol.h>

@class NSString, SUStructuredPage, UILabel;

@interface SUStructuredPageViewController : SUItemTableViewController <SUTermsAndConditionsViewDelegate, ISURLOperationDelegate>
{
    Class _dataSourceClass;
    UILabel *_noItemsLabel;
    SUStructuredPage *_structuredPage;
}

@property (strong, nonatomic) Class dataSourceClass; // @synthesize dataSourceClass=_dataSourceClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SUStructuredPage *structuredPage; // @synthesize structuredPage=_structuredPage;
@property (readonly) Class superclass;

- (BOOL)_gotoURLForItem:(id)arg1 withURLIndex:(long long)arg2;
- (BOOL)_handleLoadMoreForIndexPath:(id)arg1;
- (void)_loadMoreOperation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_loadMoreWithURL:(id)arg1;
- (void)_reloadLoadMoreCellAtIndexPath:(id)arg1;
- (void)_reloadNoItemsLabel;
- (void)_reloadTermsAndConditions;
- (void)bannerCell:(id)arg1 tappedButtonAtIndex:(long long)arg2;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (struct CGRect)documentBounds;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (BOOL)hasDisplayableContent;
- (id)init;
- (BOOL)loadMoreWithURL:(id)arg1;
- (id)newDataSource;
- (id)newNoItemsOverlayLabel;
- (id)newTermsAndConditionsFooter;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadData;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setSkLoading:(BOOL)arg1;
- (id)storePageProtocol;
- (id)viewControllerForPresentingAccountAlertControllerFromTermsAndConditionsView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

