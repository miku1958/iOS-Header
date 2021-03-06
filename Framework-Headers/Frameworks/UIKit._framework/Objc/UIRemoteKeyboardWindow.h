//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextEffectsWindow.h>

#import <UIKitCore/_UIContextCustomBinding-Protocol.h>
#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class CAContext, FBSScene, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject>
{
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    BOOL _arePlaceholdersInitialised;
    FBSSceneLayer *_keyboardSceneLayer;
    FBSScene *_activeScene;
    BOOL _resetRequired;
}

@property (readonly, nonatomic) CDStruct_a002d41c _bindingDescription;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (BOOL)_alwaysGetsContexts;
- (BOOL)_canIgnoreInteractionEvents;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (BOOL)_isAlwaysKeyboardWindow;
- (BOOL)_isFullscreen;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isWindowServerHostingManaged;
- (id)_layerForCoordinateSpaceConversion;
- (BOOL)_matchingOptions:(id)arg1;
- (long long)_orientationForClassicPresentation;
- (long long)_orientationInSceneSpace;
- (void)_resetScene;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_wantsSceneAssociation;
- (void)attachBindable;
- (void)dealloc;
- (void)detachBindable;
- (void)endDisablingInterfaceAutorotation;
- (void)invalidate;
- (void)resetScene;
- (void)setWindowLevel:(double)arg1;
- (BOOL)shouldAttachBindable;
- (BOOL)shouldDetachBindable;

@end

