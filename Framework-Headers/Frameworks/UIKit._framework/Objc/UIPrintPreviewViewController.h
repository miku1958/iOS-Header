//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UIKit/PageRangeDelegate-Protocol.h>
#import <UIKit/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UINavigationControllerDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSObject, NSString, NSURL, UICollectionViewCell, UIDocumentInteractionController, UIImageView, UILabel, UIPrintPanelViewController, UIPrintPaper, UIView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIPrintPreviewViewController : UICollectionViewController <UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate_Private, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSourcePrefetching, UIScrollViewDelegate, PageRangeDelegate, UINavigationControllerDelegate>
{
    long long _numPages;
    struct CGSize _pageSize;
    BOOL _grayscalePreview;
    BOOL _annotationsOnPreview;
    BOOL _accessibilityScrollTriggered;
    UIPrintPanelViewController *_printPanelViewController;
    UIView *_pageLabelBackgroundView;
    UIImageView *_pageLabelOnImageView;
    UILabel *_pageLabel;
    long long _pageIndexOnPageLabel;
    NSURL *_pdfURL;
    struct CGPDFDocument *_pdfDocRef;
    NSObject<OS_dispatch_queue> *_pageRendererQueue;
    NSLayoutConstraint *_pageLabelBadgeVerticalPositionConstraint;
    UIDocumentInteractionController *_documentInteractionController;
    NSURL *_sharePDFFileURL;
    UICollectionViewCell *_pinchGestureBeginningCell;
    UIImageView *_pinchAnimationView;
    UIView *_pinchAnimationWhiteBackgroundView;
    struct CGPoint _pinchGestureLastPoint;
    double _pinchGestureLastScale;
    BOOL _scaleUpOnDestinationPaper;
    BOOL _presentingDocumentInteractionController;
    NSMutableArray *_arrayOfPageImages;
    NSArray *_arrayOfCellSizes;
    NSURL *_quickLookPDFURL;
    UIPrintPaper *_destinationPaper;
    NSString *_pdfPassword;
    long long _initialPageIndexToCenter;
}

@property BOOL annotationsOnPreview;
@property (strong) NSArray *arrayOfCellSizes; // @synthesize arrayOfCellSizes=_arrayOfCellSizes;
@property (strong) NSMutableArray *arrayOfPageImages; // @synthesize arrayOfPageImages=_arrayOfPageImages;
@property (readonly) long long currentCenterPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) UIPrintPaper *destinationPaper; // @synthesize destinationPaper=_destinationPaper;
@property BOOL grayscalePreview;
@property (readonly) unsigned long long hash;
@property long long initialPageIndexToCenter; // @synthesize initialPageIndexToCenter=_initialPageIndexToCenter;
@property (readonly) long long numPages; // @synthesize numPages=_numPages;
@property (strong) NSString *pdfPassword; // @synthesize pdfPassword=_pdfPassword;
@property (strong) NSURL *pdfURL;
@property BOOL presentingDocumentInteractionController; // @synthesize presentingDocumentInteractionController=_presentingDocumentInteractionController;
@property (strong) NSURL *quickLookPDFURL; // @synthesize quickLookPDFURL=_quickLookPDFURL;
@property BOOL scaleUpOnDestinationPaper; // @synthesize scaleUpOnDestinationPaper=_scaleUpOnDestinationPaper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_adjustScrollDirectionForLayout:(long long)arg1;
- (id)_newTempURLForPreviewing;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)animateCellAndPresentDocumentInteractionController;
- (BOOL)canAddAllPages:(id)arg1;
- (BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
- (BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (BOOL)canShowMenuBar;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (id)documentInteractionControllerByPreparedForPreviewing;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)fetchPageInBackground:(unsigned long long)arg1 reloadWhenDone:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)gestureRecognizersOfVisibleCells;
- (id)getPageImageForPage:(long long)arg1 grayscale:(BOOL)arg2;
- (void)handlePinch:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint)arg1;
- (id)initWithPageSize:(struct CGSize)arg1 numberOfPages:(long long)arg2 viewSize:(struct CGSize)arg3 printPanelViewController:(id)arg4;
- (BOOL)locationInTapTargetOfPageLabelBadge:(struct CGPoint)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageBadgeTapped:(id)arg1;
- (BOOL)pageIndexIsInRange:(long long)arg1;
- (double)pageLabelBottomSpace;
- (void)pageRangeUpdated;
- (id)pathOfCenterMostCell;
- (void)previewPDF;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)resetAllPageImages;
- (void)resetCellSizesArray;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)trackCenterCell;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayout;
- (void)updatePageBadgeImage;
- (void)updatePageLabel;
- (void)updatePageNumberBadgeLocation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

