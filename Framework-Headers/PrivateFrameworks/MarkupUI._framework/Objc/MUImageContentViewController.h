//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/UIScrollViewDelegate-Protocol.h>

@class AKController, NSArray, NSString, NSURL, UIImageView, UIScrollView, UIView;

@interface MUImageContentViewController : UIViewController <UIScrollViewDelegate, MUContentViewControllerProtocol>
{
    struct CGPoint _pointToCenterAfterRotation;
    double _scaleToRestoreAfterRotation;
    BOOL _inDoubleTapZoom;
    AKController *_annotationController;
    UIScrollView *_scrollView;
    UIView *_combinedContentView;
    UIImageView *_imageView;
    double _initialContentScaleInModel;
    double _downsampledImageScale;
    NSURL *_fileURL;
    CDUnknownBlockType _loadCompletionBlock;
    struct UIEdgeInsets _edgeInsets;
}

@property (weak) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property (strong, nonatomic) UIView *combinedContentView; // @synthesize combinedContentView=_combinedContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double downsampledImageScale; // @synthesize downsampledImageScale=_downsampledImageScale;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (strong, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL inDoubleTapZoom; // @synthesize inDoubleTapZoom=_inDoubleTapZoom;
@property double initialContentScaleInModel; // @synthesize initialContentScaleInModel=_initialContentScaleInModel;
@property (copy) CDUnknownBlockType loadCompletionBlock; // @synthesize loadCompletionBlock=_loadCompletionBlock;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong) NSArray *sourceContentReplacedAnnotationIndexes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doubleTap:(id)arg1;
- (void)_downsampleImageForDisplay:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_imageIsSize:(struct CGSize)arg1 isSmallerThanSize:(struct CGSize)arg2;
- (BOOL)_imageIsSmallerThanView;
- (void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (struct CGPoint)_maximumContentOffset;
- (struct CGPoint)_minimumContentOffset;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_updateMinMaxZoomFactor;
- (struct CGRect)_zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (double)_zoomToFitZoomFactor;
- (double)_zoomToFitZoomFactorInBounds:(struct CGRect)arg1;
- (double)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
- (id)contentSnapshot;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)loadView;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setupForController:(id)arg1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)visibleContentRect;

@end

