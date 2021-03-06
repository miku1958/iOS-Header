//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKMapViewCameraDelegate-Protocol.h>

@class NSString;
@protocol VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate>
{
    id<VKMapViewCameraDelegate> _cameraDelegate;
    BOOL _isChangingMapType;
    unsigned long long _regionChangeCount;
}

@property (nonatomic) id<VKMapViewCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isChangingMapType; // @synthesize isChangingMapType=_isChangingMapType;
@property (readonly) Class superclass;

- (id)init;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)arg1;
- (void)mapLayerCanZoomInDidChange:(BOOL)arg1;
- (void)mapLayerCanZoomOutDidChange:(BOOL)arg1;
- (void)mapLayerDidBecomePitched:(BOOL)arg1;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)arg1;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (id)mapLayerPresentationForAnnotation:(id)arg1;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)arg1;

@end

