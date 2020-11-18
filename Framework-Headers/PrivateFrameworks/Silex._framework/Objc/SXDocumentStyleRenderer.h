//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentStyleRenderer-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXGradientFillView, SXImageFillView, SXVideoFillView, SXViewport, UIView;
@protocol SXDocumentControllerProvider, SXGradientFactory, SXImageViewFactory, SXPresentationDelegate;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>
{
    id<SXPresentationDelegate> _presentationDelegate;
    id<SXDocumentControllerProvider> _documentControllerProvider;
    id<SXImageViewFactory> _imageViewFactory;
    SXViewport *_viewport;
    id<SXGradientFactory> _gradientFactory;
    UIView *_topBackgroundView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
@property (readonly, nonatomic) id<SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property (strong, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property (weak, nonatomic) id<SXPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property (strong, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;
@property (readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyFillForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (id)gradientViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1 viewport:(id)arg2 imageViewFactory:(id)arg3 gradientFactory:(id)arg4;
- (void)layoutTopBackgroundView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;

@end
