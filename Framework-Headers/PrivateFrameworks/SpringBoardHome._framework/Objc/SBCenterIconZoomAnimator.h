//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconZoomAnimator.h>

#import <SpringBoardHome/SBIconListLayoutDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListModelObserver-Protocol.h>

@class NSArray, NSString, SBFolderController, SBHCenterZoomSettings, UIView;
@protocol SBDockOffscreenFractionModifying;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver>
{
    UIView *_zoomView;
    UIView *_folderView;
    double _iconZoomedZ;
    NSArray *_extraViewsContainers;
    NSArray *_extraViews;
    double _centerRow;
    double _centerCol;
    struct CGPoint _cameraPosition;
    BOOL _animatingIcons;
    id<SBDockOffscreenFractionModifying> _dockOffscreenFractionModifier;
}

@property (readonly, nonatomic) BOOL animatingIcons; // @synthesize animatingIcons=_animatingIcons;
@property (readonly, nonatomic) struct CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property (readonly, nonatomic) double centerCol; // @synthesize centerCol=_centerCol;
@property (readonly, nonatomic) double centerRow; // @synthesize centerRow=_centerRow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<SBDockOffscreenFractionModifying> dockOffscreenFractionModifier; // @synthesize dockOffscreenFractionModifier=_dockOffscreenFractionModifier;
@property (readonly, nonatomic) SBFolderController *folderController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBHCenterZoomSettings *settings; // @dynamic settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;

- (void).cxx_destruct;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForFolderView;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_calculateCenters;
- (void)_calculateCentersAndCameraPosition;
- (void)_cleanupAnimation;
- (void)_cleanupAnimationIncludingDock:(BOOL)arg1;
- (double)_iconZoomDelay;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)_updateDockForFraction:(double)arg1;
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (struct CGPoint)iconListView:(id)arg1 originForIconCoordinate:(struct SBIconCoordinate)arg2 metrics:(id)arg3 proposedOrigin:(struct CGPoint)arg4;
- (id)initWithFolderController:(id)arg1;
- (void)setFraction:(double)arg1 withCenter:(struct CGPoint)arg2;

@end

