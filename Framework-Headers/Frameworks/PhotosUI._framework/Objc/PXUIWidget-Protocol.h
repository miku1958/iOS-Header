//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSObject, PXOneUpPresentation, PXPhotosDetailsContext, PXRegionOfInterest, PXUIViewControllerTransition, PXZoomAnimationCoordinator, UIFocusUpdateContext, UITraitCollection, UIViewController;
@protocol PXAnonymousView, PXAnonymousViewController, PXUIImageViewBasicTile, PXUIViewBasicTile, UICoordinateSpace;

@protocol PXUIWidget <PXWidget>

@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (strong, nonatomic) PXOneUpPresentation *oneUpPresentation;


@optional
- (id<PXUIViewBasicTile>)bestCursorTileForLiftingAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(NSObject<UICoordinateSpace> *)arg2;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(NSObject<UICoordinateSpace> *)arg2;
- (void)controllerTraitCollectionDidChangeFrom:(UITraitCollection *)arg1 to:(UITraitCollection *)arg2;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(BOOL)arg2;
- (void)environmentDidUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (id<PXUIImageViewBasicTile>)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint)arg1;
- (void)preloadWithSourceRegionOfInterest:(PXRegionOfInterest *)arg1 forContext:(PXPhotosDetailsContext *)arg2;
- (void)prepareForInteractiveTransition:(PXUIViewControllerTransition *)arg1;
- (NSObject<PXAnonymousViewController> *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(NSObject<PXAnonymousView> *)arg2;
- (PXRegionOfInterest *)regionOfInterestForContext:(PXPhotosDetailsContext *)arg1;
- (PXZoomAnimationCoordinator *)zoomAnimationCoordinatorForContext:(PXPhotosDetailsContext *)arg1;
@end

