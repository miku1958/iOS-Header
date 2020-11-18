//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UIKit/PageRangeDelegate-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <UIKit/UINavigationControllerDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, NSObject, NSString, NSURL, UIDocumentInteractionController, UILabel, UIPrintPanelViewController, UIPrintPaper, UIView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIPrintPreviewViewController : UICollectionViewController <UIViewControllerPreviewingDelegate_Private, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UIScrollViewDelegate, PageRangeDelegate, UINavigationControllerDelegate>
{
    long long _numPages;
    struct CGSize _pageSize;
    BOOL _grayscalePreview;
    BOOL _accessibilityScrollTriggered;
    UIPrintPanelViewController *_printPanelViewController;
    UIView *_pageLabelBackgroundView;
    UILabel *_pageLabel;
    long long _pageIndexOnPageLabel;
    NSURL *_pdfURL;
    struct CGPDFDocument *_pdfDocRef;
    NSObject<OS_dispatch_queue> *_pageRendererQueue;
    NSLayoutConstraint *_pageLabelBadgeVerticalPositionConstraint;
    UIDocumentInteractionController *_documentInteractionController;
    id previousNavigationControllerDelegate;
    BOOL _scaleUpOnDestinationPaper;
    NSMutableArray *_arrayOfPageImages;
    NSURL *_quickLookPDFURL;
    UIPrintPaper *_destinationPaper;
    NSString *_pdfPassword;
    long long _initialPageIndexToCenter;
}

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
@property (strong) NSURL *quickLookPDFURL; // @synthesize quickLookPDFURL=_quickLookPDFURL;
@property BOOL scaleUpOnDestinationPaper; // @synthesize scaleUpOnDestinationPaper=_scaleUpOnDestinationPaper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_adjustScrollDirectionForLayout:(long long)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
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
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (id)getPageImageForPage:(long long)arg1;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint)arg1;
- (id)initWithPageSize:(struct CGSize)arg1 numberOfPages:(long long)arg2 viewSize:(struct CGSize)arg3 printPanelViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)pageIndexIsInRange:(long long)arg1;
- (double)pageLabelBottomSpace;
- (void)pageRangeUpdated;
- (id)pathOfCenterCell;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)resetAllPageImages;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)sharePressed:(id)arg1;
- (void)trackCenterCell;
- (void)updateLayout;
- (void)updatePageNumberBadgeLocation;
- (struct _NSRange)validRenderRange;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

