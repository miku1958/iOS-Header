//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextEffectsWindow.h>

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted : UITextEffectsWindow
{
}

- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isFullscreen;
- (BOOL)_isTextEffectsWindowHosting;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isWindowServerHostingManaged;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (void)_sceneBoundsDidChange;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGRect)actualSceneBounds;
- (struct CGRect)actualSceneBoundsForLandscape:(BOOL)arg1;
- (struct UIEdgeInsets)safeAreaInsets;

@end

