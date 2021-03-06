//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <PhotosUICore/PXProgrammaticNavigationUpdateTarget-Protocol.h>

@class NSString;

@interface UITabBarController (PhotosUICore) <PXProgrammaticNavigationUpdateTarget>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL px_hidesTabBarForCurrentHorizontalSizeClass;
@property (readonly, nonatomic) BOOL px_hidesTabBarForRegularHorizontalSizeClass;
@property (readonly, nonatomic, getter=px_isTabBarHidden) BOOL px_tabBarHidden;
@property (readonly) Class superclass;

- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_px_selectTabForKeyCommand:(id)arg1;
- (void)_switchToBarBarItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (double)px_HDRFocus;
- (BOOL)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1;
- (id)px_defaultKeyCommandsWithDelegate:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;
- (double)px_imageModulationIntensity;
- (BOOL)px_isImageModulationEnabled;
- (id)px_navigateToMemoryWithLocalIdentifier:(id)arg1 dismissAnyPresentedViewController:(BOOL)arg2;
- (id)px_navigationDestination;
- (void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2;
- (void)px_switchToTabForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
@end

