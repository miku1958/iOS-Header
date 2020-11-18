//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class CADisplayLink, NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding>
{
    NSMutableArray *_targetsAndActions;
    CADisplayLink *_displayLink;
    UIScene *_scene;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // @synthesize _scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;
- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_updateStatus;
- (id)initWithScene:(id)arg1;
- (void)registerTarget:(id)arg1 action:(SEL)arg2;
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;

@end

