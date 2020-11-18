//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIRemoteViewFocusProxy-Protocol.h>
#import <UIKit/_UIScrollToTopView-Protocol.h>

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy>
{
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    BOOL _hasIntrinsicContentSize;
    struct CGSize _intrinsicContentSize;
    struct CGRect _formerTextEffectsContentFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;
- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_fencingEffectsAreVisible;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (long long)_interfaceOrientationForScene:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_needsTextEffectsUpdateToFrame:(struct CGRect)arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1;
- (void)_updateTextEffectsGeometriesImmediately;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (BOOL)isScrollEnabled;
- (void)updateIntrinsicContentSize:(struct CGSize)arg1;

@end

