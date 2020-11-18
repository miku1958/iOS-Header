//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSString, UIScene;

@interface UIPointerLockState : NSObject <_UISceneComponentProviding>
{
    long long _status;
    UIScene *_scene;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // @synthesize _scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isLocked) BOOL locked; // @dynamic locked;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pointerLockStatusUpdated;
- (void)_preferredPointerLockStatusUpdated;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)_windowScene;
- (id)initWithScene:(id)arg1;
- (id)windowHostingScene;

@end
