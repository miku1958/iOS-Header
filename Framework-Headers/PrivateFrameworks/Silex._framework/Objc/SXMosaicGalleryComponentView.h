//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXGalleryComponentView.h>

#import <Silex/SXFullscreenCanvasShowable-Protocol.h>
#import <Silex/SXImageViewDelegate-Protocol.h>
#import <Silex/SXMosaicGalleryLayouterDataSource-Protocol.h>
#import <Silex/SXTextSourceDataSource-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, SXFullscreenCanvasController, SXMediaViewEvent, SXMosaicGalleryLayouter, UIView;
@protocol SXFullscreenCanvasControllerFactory, SXGalleryItemImageViewFactory;

@interface SXMosaicGalleryComponentView : SXGalleryComponentView <SXMosaicGalleryLayouterDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXTextSourceDataSource, SXViewportChangeListener>
{
    BOOL _loadedAtleastOneImage;
    id<SXGalleryItemImageViewFactory> _imageViewFactory;
    id<SXFullscreenCanvasControllerFactory> _canvasControllerFactory;
    SXFullscreenCanvasController *_fullScreenCanvasController;
    UIView *_galleryView;
    NSMutableArray *_imageViews;
    NSMutableArray *_visibleImageViews;
    SXMediaViewEvent *_mediaViewEvent;
    SXMosaicGalleryLayouter *_galleryLayouter;
    NSMutableSet *_exposedGalleryItems;
}

@property (readonly, nonatomic) id<SXFullscreenCanvasControllerFactory> canvasControllerFactory; // @synthesize canvasControllerFactory=_canvasControllerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableSet *exposedGalleryItems; // @synthesize exposedGalleryItems=_exposedGalleryItems;
@property (readonly, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // @synthesize fullScreenCanvasController=_fullScreenCanvasController;
@property (strong, nonatomic) SXMosaicGalleryLayouter *galleryLayouter; // @synthesize galleryLayouter=_galleryLayouter;
@property (strong, nonatomic) UIView *galleryView; // @synthesize galleryView=_galleryView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXGalleryItemImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property (readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property (nonatomic) BOOL loadedAtleastOneImage; // @synthesize loadedAtleastOneImage=_loadedAtleastOneImage;
@property (strong, nonatomic) SXMediaViewEvent *mediaViewEvent; // @synthesize mediaViewEvent=_mediaViewEvent;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)arg1;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (void)discardContents;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (void)finishMediaViewEvent;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)fullScreenCanvasController:(id)arg1 canvasViewForShowable:(id)arg2;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (BOOL)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (BOOL)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (id)imageViewForLocation:(struct CGPoint)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (void)loadComponent:(id)arg1;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderContents;
- (void)renderContentsInDrawableRect;
- (BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (BOOL)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;
- (void)submitEvents;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (void)visibleBoundsChanged;
- (void)willSubmitMediaExposureEvent:(id)arg1;

@end

