//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUserActivity, UICanvas, UIScene, UISceneConfiguration;

@interface UISceneSession : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    UIScene *_scene;
    NSString *_role;
    NSString *_persistentIdentifier;
    UISceneConfiguration *_configuration;
    NSUserActivity *_stateRestorationActivity;
    NSDictionary *_userInfo;
    struct {
        unsigned int _userInfoIsCurrent:1;
        unsigned int _stateRestorationActivityIsDirty:1;
        unsigned int _stateRestorationActivityIsCurrent:1;
        unsigned int _trackingSessionRequest:1;
        unsigned int _configurationIsDirty:1;
        unsigned int _userInfoIsDirty:1;
        unsigned int _isInternal:1;
    } _sessionFlags;
}

@property (nonatomic, setter=_setConfigurationIsDirty:) BOOL _configurationIsDirty;
@property (readonly, nonatomic) BOOL _configurationNeedsReevalulation;
@property (readonly, nonatomic, getter=_isInternal) BOOL _internal;
@property (nonatomic, setter=_setStateRestorationActivityIsDirty:) BOOL _stateRestorationActivityIsDirty;
@property (nonatomic, setter=_setTrackingRefreshRequest:) BOOL _trackingRefreshRequest;
@property (nonatomic, setter=_setUserInfoIsDirty:) BOOL _userInfoIsDirty;
@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, copy, nonatomic) UISceneConfiguration *configuration;
@property (readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property (readonly, weak, nonatomic) UIScene *scene; // @synthesize scene=_scene;
@property (strong, nonatomic) NSUserActivity *stateRestorationActivity;
@property (readonly, nonatomic) long long systemType;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)canvasRepresentationForSystemType:(long long)arg1;
+ (id)defaultCanvasRepresentation;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_clearAllDirtyFlags;
- (id)_copyWithoutUserInfo;
- (id)_init;
- (id)_initWithIdentifier:(id)arg1 sessionRole:(id)arg2 configurationName:(id)arg3;
- (void)_loadStateRestorationActivityIfNeeded;
- (void)_loadUserInfo;
- (void)_resetStateRestorationToActivity:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_updateConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)delegateClass;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

