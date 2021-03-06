//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber, UIFocusAnimationCoordinator;

__attribute__((visibility("hidden")))
@interface _UIFocusAnimationCoordinatorManager : NSObject
{
    UIFocusAnimationCoordinator *_activeFocusAnimationCoordinator;
    NSHashTable *_unfocusingItems;
    double _lastFocusUpdateTime;
    UIFocusAnimationCoordinator *_lastFocusingItemAnimationCoordinator;
    NSNumber *_inheritedAnimationCoordinatorActiveAnimation;
}

@property (strong, nonatomic) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator; // @synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator;
@property (strong, nonatomic) NSNumber *inheritedAnimationCoordinatorActiveAnimation; // @synthesize inheritedAnimationCoordinatorActiveAnimation=_inheritedAnimationCoordinatorActiveAnimation;
@property (nonatomic) double lastFocusUpdateTime; // @synthesize lastFocusUpdateTime=_lastFocusUpdateTime;
@property (strong, nonatomic) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator; // @synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator;
@property (readonly, nonatomic) NSHashTable *unfocusingItems; // @synthesize unfocusingItems=_unfocusingItems;

- (void).cxx_destruct;
- (void)_performDelayedFocusingAnimationIfNecessary;
- (void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2;
- (id)init;
- (id)willUpdateFocusInContext:(id)arg1;

@end

