//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/PDFAKControllerDelegateProtocol-Protocol.h>
#import <MarkupUI/PDFViewDelegatePrivate-Protocol.h>

@class MUPDFPageLabelView, NSArray, NSLayoutConstraint, NSString, PDFDocument, PDFPage, PDFThumbnailView, PDFView, UIScrollView, UIView;

@interface MUPDFContentViewController : MUContentViewController <PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, MUContentViewControllerProtocol>
{
    PDFDocument *_pdfDocument;
    BOOL _showsThumbnailView;
    BOOL _navigationModeHorizontal;
    BOOL _forcesPDFViewTopAlignment;
    BOOL _constraintsAreHorizontal;
    BOOL _viewIsTransitioningBetweenSizes;
    BOOL _viewTransitionPreviousAutoscalingState;
    BOOL _didSetup;
    NSArray *_sourceContentReplacedAnnotationMaps;
    PDFView *_pdfView;
    PDFThumbnailView *_thumbnailView;
    unsigned long long _inkStyle;
    UIView *_thumbnailViewHolder;
    NSArray *_thumbnailViewHolderConstraints;
    NSLayoutConstraint *_thumbnailViewHolderRevealConstraint;
    MUPDFPageLabelView *_pageLabelView;
    PDFPage *_viewTransitionPageToCenter;
    double _viewTransitionPreviousScale;
    struct CGPoint _viewTransitionPointOnPageToCenter;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) BOOL centersIgnoringContentInsets;
@property BOOL constraintsAreHorizontal; // @synthesize constraintsAreHorizontal=_constraintsAreHorizontal;
@property (readonly, nonatomic) UIScrollView *contentViewScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long defaultToolTag;
@property (readonly, copy) NSString *description;
@property BOOL didSetup; // @synthesize didSetup=_didSetup;
@property (readonly, nonatomic) NSString *documentUnlockedWithPassword;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic) BOOL forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property (nonatomic) BOOL navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property (readonly) unsigned long long pageCount;
@property (strong) MUPDFPageLabelView *pageLabelView; // @synthesize pageLabelView=_pageLabelView;
@property (readonly) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property (strong) PDFView *pdfView; // @synthesize pdfView=_pdfView;
@property (nonatomic) BOOL showsThumbnailView; // @synthesize showsThumbnailView=_showsThumbnailView;
@property (strong) NSArray *sourceContentReplacedAnnotationMaps; // @synthesize sourceContentReplacedAnnotationMaps=_sourceContentReplacedAnnotationMaps;
@property (readonly) Class superclass;
@property (strong) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property (strong) UIView *thumbnailViewHolder; // @synthesize thumbnailViewHolder=_thumbnailViewHolder;
@property (strong) NSArray *thumbnailViewHolderConstraints; // @synthesize thumbnailViewHolderConstraints=_thumbnailViewHolderConstraints;
@property (strong) NSLayoutConstraint *thumbnailViewHolderRevealConstraint; // @synthesize thumbnailViewHolderRevealConstraint=_thumbnailViewHolderRevealConstraint;
@property BOOL viewIsTransitioningBetweenSizes; // @synthesize viewIsTransitioningBetweenSizes=_viewIsTransitioningBetweenSizes;
@property (weak) PDFPage *viewTransitionPageToCenter; // @synthesize viewTransitionPageToCenter=_viewTransitionPageToCenter;
@property struct CGPoint viewTransitionPointOnPageToCenter; // @synthesize viewTransitionPointOnPageToCenter=_viewTransitionPointOnPageToCenter;
@property BOOL viewTransitionPreviousAutoscalingState; // @synthesize viewTransitionPreviousAutoscalingState=_viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale; // @synthesize viewTransitionPreviousScale=_viewTransitionPreviousScale;

- (void).cxx_destruct;
- (BOOL)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (void)_createPDFView;
- (struct CGPoint)_maximumContentOffset;
- (struct CGSize)_medianSizeForCurrentDocumentInPDFViewWithGetter:(CDUnknownBlockType)arg1;
- (struct CGPoint)_minimumContentOffset;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_teardownPDFViewIfNecessary;
- (void)_updateMinMaxZoomFactor;
- (void)_updatePDFViewDisplayMode;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize)contentSize;
- (id)contentSnapshot;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)dealloc;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)highlight:(id)arg1;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;
- (void)loadContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)menuItems:(id)arg1 forPage:(id)arg2;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)setup;
- (BOOL)shouldShowAnnotationsOfType:(id)arg1;
- (void)teardown;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)visibleContentRect;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id)arg1;

@end

