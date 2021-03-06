//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <SearchToShareCore/MFMailComposeViewControllerDelegate-Protocol.h>
#import <SearchToShareCore/STSGridLayoutDelegate-Protocol.h>
#import <SearchToShareCore/STSLoadMoreFooterDelegate-Protocol.h>
#import <SearchToShareCore/STSResultDetailViewControllerDelegate-Protocol.h>
#import <SearchToShareCore/STSSearchModelDelegate-Protocol.h>
#import <SearchToShareCore/STSZKWBrowserHeaderViewDelegate-Protocol.h>
#import <SearchToShareCore/UICollectionViewDataSource-Protocol.h>
#import <SearchToShareCore/UISearchBarDelegate-Protocol.h>
#import <SearchToShareCore/UIViewControllerPreviewingDelegate-Protocol.h>
#import <SearchToShareCore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID, SFSearchResult, STSDetailTransitionAnimator, STSMailComposeViewController, STSPickerView, STSSearchModel, UIColor;
@protocol OS_dispatch_queue, STSPickerSelectionDelegate, UIViewControllerPreviewing;

@interface STSPicker : UIViewController <UIViewControllerPreviewingDelegate, STSResultDetailViewControllerDelegate, MFMailComposeViewControllerDelegate, UIViewControllerTransitioningDelegate, STSLoadMoreFooterDelegate, STSSearchModelDelegate, UICollectionViewDataSource, STSGridLayoutDelegate, STSZKWBrowserHeaderViewDelegate, UISearchBarDelegate>
{
    STSSearchModel *_searchModel;
    NSUUID *_lastSearchId;
    NSMutableArray *_displayedResults;
    NSMutableSet *_queuedImageURLs;
    unsigned long long _sectionsTag;
    long long _lastInsertedIndexesCount;
    NSMutableSet *_lastInsertedIndexesWaitingToLoad;
    NSArray *_visiblePredictions;
    NSIndexPath *_detailResultIndexPath;
    NSIndexPath *_activeDownloadIndexPath;
    double _activeDownloadProgress;
    id<UIViewControllerPreviewing> _previewingContext;
    STSMailComposeViewController *_feedbackMailComposer;
    STSDetailTransitionAnimator *_detailTransitionAnimator;
    BOOL _isLoadingMoreResults;
    BOOL _needsReloadAfterLayout;
    BOOL _showSuggestions;
    BOOL _isScrolling;
    BOOL _isSnapShotting;
    NSObject<OS_dispatch_queue> *_displayedResultsQueue;
    SFSearchResult *_previewingSearchResult;
    NSMutableSet *_visibleResultsSent;
    struct CGPoint _startScrollPosition;
    BOOL _debugMode;
    UIColor *_originalColor;
    NSMutableArray *_debugItems;
    NSString *_currentQuery;
    id<STSPickerSelectionDelegate> _selectionDelegate;
    NSString *_headerCellReuseIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *headerCellReuseIdentifier; // @synthesize headerCellReuseIdentifier=_headerCellReuseIdentifier;
@property (readonly, nonatomic) STSPickerView *pickerView;
@property (readonly, nonatomic) NSArray *querySuggestions;
@property (weak, nonatomic) id<STSPickerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property (readonly) Class superclass;
@property (strong, nonatomic) STSPickerView *view; // @dynamic view;

- (void).cxx_destruct;
- (void)_beginDownloadingResultAtIndexPath:(id)arg1;
- (void)_cancelActiveDownload;
- (id)_detailViewControllerForIndexPath:(id)arg1;
- (void)_fetchImageWithURL:(id)arg1 priority:(long long)arg2 forCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)_handleDebugGesture:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (id)_loadMoreFooter;
- (void)_loadMoreResultsIfNecessary;
- (id)_noticeTextForSearchError:(id)arg1;
- (void)_presentDetailViewControllerForIndexPath:(id)arg1;
- (void)_presentNoticeWithText:(id)arg1;
- (void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)arg1;
- (void)_updatePredictedSuggestionsForSize:(struct CGSize)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)cancelImageDownloads;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)detailViewControllerDidInsert:(id)arg1;
- (void)detailViewControllerDidSelectProviderLink:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)getTapToRadarPunchOut:(id)arg1;
- (void)headerDidSelectCancelButton:(id)arg1;
- (void)headerView:(id)arg1 didRequestCompletion:(id)arg2;
- (void)headerView:(id)arg1 didSearchFor:(id)arg2;
- (void)headerView:(id)arg1 didSelectSuggestionButtonAtIndex:(unsigned long long)arg2;
- (void)headerViewDidDeleteText;
- (void)headerViewDidSelectSearchButton:(id)arg1;
- (id)initWithSearchModel:(id)arg1 showSuggestions:(BOOL)arg2;
- (void)loadMoreFooterDidTapLogo;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)performSearchWithQueryString:(id)arg1 requestType:(long long)arg2;
- (void)performZKWSearchQuery;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)resetContent;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)searchModel:(id)arg1 insertedResultsAtIndexPaths:(id)arg2 removedResultsAtIndexPaths:(id)arg3;
- (void)searchModelUpdatedPredictedSuggestions:(id)arg1;
- (void)sendVisibleResultsFeedback;
- (id)snapshotImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentOffset:(double)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willResignActiveWithConversation:(id)arg1;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;

@end

