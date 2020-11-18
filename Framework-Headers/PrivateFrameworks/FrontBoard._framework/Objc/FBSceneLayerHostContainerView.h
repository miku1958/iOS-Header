//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FrontBoard/FBSceneLayerManagerObserver-Protocol.h>
#import <FrontBoard/_FBSceneGeometryObserver-Protocol.h>

@class FBScene, NSArray, NSMutableArray, NSString;
@protocol FBSceneLayerHostContainerViewDataSource, FBSceneLayerHostContainerViewDelegate;

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver>
{
    FBScene *_scene;
    id<FBSceneLayerHostContainerViewDelegate> _delegate;
    id<FBSceneLayerHostContainerViewDataSource> _dataSource;
    NSMutableArray *_hostViews;
    NSMutableArray *_hostedLayers;
}

@property (nonatomic) id<FBSceneLayerHostContainerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<FBSceneLayerHostContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSArray *hostedLayers; // @synthesize hostedLayers=_hostedLayers;
@property (readonly, strong, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property (readonly) Class superclass;

- (void)_adjustHostViewFrame:(id)arg1;
- (id)_createHostViewForLayer:(id)arg1;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_noteHostingStatusChanged;
- (void)_rebuildLayers;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasContent;
- (id)init;
- (id)initWithScene:(id)arg1;
- (BOOL)isHosting;
- (void)rebuildLayers;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)window;

@end

