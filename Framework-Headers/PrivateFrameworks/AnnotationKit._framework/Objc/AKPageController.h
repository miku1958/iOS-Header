//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController, AKGeometryHelper, AKLayerPresentationManager, AKPageModelController, UIView;
@protocol AKControllerDelegateProtocol;

@interface AKPageController : NSObject
{
    BOOL _shouldPixelate;
    BOOL _layerPresentationManagerWasSetup;
    AKController *_controller;
    AKPageModelController *_pageModelController;
    unsigned long long _pageIndex;
    AKGeometryHelper *_geometryHelper;
    AKLayerPresentationManager *_layerPresentationManager;
    UIView *_overlayView;
}

@property (weak) AKController *controller; // @synthesize controller=_controller;
@property (readonly) id<AKControllerDelegateProtocol> delegate;
@property (strong, nonatomic) AKGeometryHelper *geometryHelper; // @synthesize geometryHelper=_geometryHelper;
@property (strong, nonatomic) AKLayerPresentationManager *layerPresentationManager; // @synthesize layerPresentationManager=_layerPresentationManager;
@property BOOL layerPresentationManagerWasSetup; // @synthesize layerPresentationManagerWasSetup=_layerPresentationManagerWasSetup;
@property (strong, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (strong) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
@property BOOL shouldPixelate; // @synthesize shouldPixelate=_shouldPixelate;

+ (id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithController:(id)arg1 andPageModelController:(id)arg2;
- (id)annotationsBeneathLoupe:(id)arg1;
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;
- (long long)currentModelToScreenExifOrientation;
- (double)currentModelToScreenScaleFactor;
- (id)initForTesting;
- (struct CGRect)maxPageRect;
- (double)modelBaseScaleFactor;
- (id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(struct CGRect)arg2 forLoupeAnnotation:(id)arg3;
- (void)overlayWasAddedToSuperview;
- (void)releaseRelinquishables;
- (BOOL)relinquishablesAreLoaded;
- (void)setupRelinquishables;
- (void)teardown;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3;

@end
