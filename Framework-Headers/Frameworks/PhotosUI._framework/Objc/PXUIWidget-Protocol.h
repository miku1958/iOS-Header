//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSObject, PXOneUpPresentation, PXPhotosDetailsContext, PXRegionOfInterest, PXZoomAnimationCoordinator, UIFocusUpdateContext, UITraitCollection, UIViewController;
@protocol UICoordinateSpace;

@protocol PXUIWidget <PXWidget>

@property (strong, nonatomic) PXOneUpPresentation *oneUpPresentation;


@optional
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(NSObject<UICoordinateSpace> *)arg2;
- (void)controllerTraitCollectionDidChangeFrom:(UITraitCollection *)arg1 to:(UITraitCollection *)arg2;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(BOOL)arg2;
- (void)environmentDidUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)preloadWithSourceRegionOfInterest:(PXRegionOfInterest *)arg1 forContext:(PXPhotosDetailsContext *)arg2;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (PXRegionOfInterest *)regionOfInterestForContext:(PXPhotosDetailsContext *)arg1;
- (PXZoomAnimationCoordinator *)zoomAnimationCoordinatorForContext:(PXPhotosDetailsContext *)arg1;
@end

