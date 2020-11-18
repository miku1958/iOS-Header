//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKPageController.h>

@class AKController, AKGeometryHelper, AKLayerPresentationManager, AKPageModelController, UIView;

@interface AKPageControllerForTesting : AKPageController
{
    AKController *_testingController;
    unsigned long long _testingPageIndex;
    AKPageModelController *_testingPageModelController;
    AKLayerPresentationManager *_testingLayerPresentationManager;
    AKGeometryHelper *_testingGeometryHelper;
    UIView *_testingOverlayView;
}

@property (strong) AKController *testingController; // @synthesize testingController=_testingController;
@property (strong) AKGeometryHelper *testingGeometryHelper; // @synthesize testingGeometryHelper=_testingGeometryHelper;
@property (strong) AKLayerPresentationManager *testingLayerPresentationManager; // @synthesize testingLayerPresentationManager=_testingLayerPresentationManager;
@property (strong) UIView *testingOverlayView; // @synthesize testingOverlayView=_testingOverlayView;
@property unsigned long long testingPageIndex; // @synthesize testingPageIndex=_testingPageIndex;
@property (strong) AKPageModelController *testingPageModelController; // @synthesize testingPageModelController=_testingPageModelController;

- (void).cxx_destruct;
- (id)controller;
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;
- (id)geometryHelper;
- (id)init;
- (id)layerPresentationManager;
- (struct CGRect)maxPageRect;
- (double)modelBaseScaleFactor;
- (id)overlayView;
- (unsigned long long)pageIndex;
- (id)pageModelController;

@end

