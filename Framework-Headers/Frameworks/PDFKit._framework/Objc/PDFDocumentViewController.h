//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import <PDFKit/PDFPageBackgroundManagerDelegate-Protocol.h>
#import <PDFKit/UIPageViewControllerDataSource-Protocol.h>
#import <PDFKit/UIPageViewControllerDelegate-Protocol.h>
#import <PDFKit/UIScrollViewDelegate-Protocol.h>

@class NSString, PDFDocumentViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    PDFDocumentViewControllerPrivate *_private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromPDFPageViewController:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPDFPageViewController:(id)arg2;
- (id)_pageViewController:(id)arg1 nextViewController:(int)arg2 forViewController:(id)arg3;
- (id)_pageViewControllerCreate:(int)arg1;
- (void)_updateCurrentPageViewController:(id)arg1;
- (double)autoScaleFactor;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int *)arg2;
- (void)clearTextSelectionHandles;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (id)currentPage;
- (void)dealloc;
- (id)document;
- (void)enableTextSelectionHandles;
- (id)findPageViewControllerForPageIndex:(long long)arg1;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (void)goToPage:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3;
- (BOOL)hasBackgroundImage;
- (id)initWithPDFView:(id)arg1 andNavigationOrientation:(long long)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4;
- (double)maxScaleFactor;
- (double)minScaleFactor;
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(BOOL)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViews;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (double)scaleFactor;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selection;
- (void)setAutoScales:(BOOL)arg1;
- (void)setDisplaysRTL:(BOOL)arg1;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (void)setScaleFactor:(double)arg1;
- (void)setScrollViewScrollEnabled:(BOOL)arg1;
- (void)setSelection:(id)arg1;
- (void)updateScrollViews;
- (void)viewWillLayoutSubviews;
- (void)willForceUpdate;

@end

