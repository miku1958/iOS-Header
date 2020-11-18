//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol NCNotificationActionRunner;

@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSString *_identifier;
    NSString *_title;
    unsigned long long _activationMode;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    unsigned long long _behavior;
    NSDictionary *_behaviorParameters;
    id<NCNotificationActionRunner> _actionRunner;
    BOOL _requiresAuthentication;
    BOOL _destructiveAction;
    BOOL _shouldDismissNotification;
}

@property (readonly, nonatomic) id<NCNotificationActionRunner> actionRunner; // @synthesize actionRunner=_actionRunner;
@property (readonly, nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property (readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property (readonly, copy, nonatomic) NSDictionary *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDestructiveAction) BOOL destructiveAction; // @synthesize destructiveAction=_destructiveAction;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *launchBundleID; // @synthesize launchBundleID=_launchBundleID;
@property (readonly, copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property (readonly, nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property (readonly, nonatomic) BOOL shouldDismissNotification; // @synthesize shouldDismissNotification=_shouldDismissNotification;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemAction) BOOL systemAction;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationAction:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
