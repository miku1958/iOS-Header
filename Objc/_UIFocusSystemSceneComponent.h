//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFocusItemContainer-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSArray, NSString, UIFocusSystem, UIScene, UIView, _UIFocusActiveSceneObserver, _UIFocusMovementPerformer, _UIFocusScrollManager, _UIScreenFocusSystemManager;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer, _UIFocusRegionContainer;

@interface _UIFocusSystemSceneComponent : NSObject <_UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer>
{
    UIScene *_scene;
    UIFocusSystem *_focusSystem;
    _UIFocusMovementPerformer *_movementPerformer;
    _UIFocusScrollManager *_scrollManager;
    _UIScreenFocusSystemManager *_screenManager;
    _UIFocusActiveSceneObserver *_activeSceneObserver;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // @synthesize _scene;
@property (readonly, nonatomic) _UIFocusActiveSceneObserver *activeSceneObserver; // @synthesize activeSceneObserver=_activeSceneObserver;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
@property (strong, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, nonatomic) _UIFocusMovementPerformer *movementPerformer; // @synthesize movementPerformer=_movementPerformer;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) _UIScreenFocusSystemManager *screenManager; // @synthesize screenManager=_screenManager;
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager; // @synthesize scrollManager=_scrollManager;
@property (readonly) Class superclass;

+ (BOOL)__applicationIsSpringBoard;
+ (BOOL)_platformAlwaysWantsFocusSystemForScene:(id)arg1;
+ (BOOL)_platformWantsFocusSystemForScene:(id)arg1;
+ (id)_screenForScene:(id)arg1;
+ (BOOL)needsFocusSystem;
+ (BOOL)platformSupportsFocusSystem;
+ (id)sceneComponentForFocusSystem:(id)arg1;
+ (id)sceneComponentForView:(id)arg1;
- (void).cxx_destruct;
- (void)_adjustFocusForAccessibilityIfNeeded:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setupFocusSystem;
- (void)_tearDownFocusSystem;
- (void)_updateFocusSystemState;
- (id)_windowScene;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (id)initWithScene:(id)arg1;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end

