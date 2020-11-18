//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusSystem, _UIFocusInputDeviceInfo;

@protocol _UIFocusUpdateRequesting <NSObject>

@property (readonly, nonatomic) BOOL allowsDeferral;
@property (readonly, nonatomic) BOOL allowsFocusRestoration;
@property (readonly, nonatomic) BOOL allowsFocusingCurrentItem;
@property (readonly, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;
@property (readonly, nonatomic) BOOL shouldPlayFocusSound;

@end

