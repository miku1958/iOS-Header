//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIRemoteKeyboardWindow.h>

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow
{
}

+ (BOOL)_isSecure;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;
- (long long)_orientationForViewTransform;
- (struct UIEdgeInsets)safeAreaInsets;

@end

