//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentStyleRenderer-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXComponentStyle, SXComponentView, SXDocumentController, SXGradientFillView, SXImageFillView, SXVideoFillView, UIView;
@protocol SXGradientFactory, SXImageViewFactory;

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener, SXComponentStyleRenderer>
{
    BOOL _didRegisterForDynamicBounds;
    SXComponentStyle *_componentStyle;
    SXDocumentController *_documentController;
    id<SXImageViewFactory> _imageViewFactory;
    id<SXGradientFactory> _gradientFactory;
    SXComponentView *_componentView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
    UIView *_fillClippingView;
    UIView *_borderContainerView;
}

@property (strong, nonatomic) UIView *borderContainerView; // @synthesize borderContainerView=_borderContainerView;
@property (readonly, nonatomic) SXComponentStyle *componentStyle; // @synthesize componentStyle=_componentStyle;
@property (readonly, weak, nonatomic) SXComponentView *componentView; // @synthesize componentView=_componentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisterForDynamicBounds; // @synthesize didRegisterForDynamicBounds=_didRegisterForDynamicBounds;
@property (readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property (strong, nonatomic) UIView *fillClippingView; // @synthesize fillClippingView=_fillClippingView;
@property (readonly, nonatomic) id<SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property (strong, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property (readonly) Class superclass;
@property (strong, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;

- (void).cxx_destruct;
- (void)applyComponentStyle;
- (void)applyFill:(id)arg1;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)drawBorder:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)initWithComponentStyle:(id)arg1 documentController:(id)arg2 imageViewFactory:(id)arg3 gradientViewFactory:(id)arg4;
- (void)prepareForComponentView:(id)arg1;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;

@end

