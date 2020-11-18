//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextEffectsWindow.h>

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    BOOL _arePlaceholdersInitialised;
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2;
- (BOOL)_alwaysGetsContexts;
- (void)_attachSceneLayer;
- (void)_detachSceneLayer;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;
- (BOOL)_isFullscreen;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_newSceneLayer;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1;
- (BOOL)_wantsSceneAssociation;
- (void)invalidate;
- (void)setWindowLevel:(double)arg1;

@end

