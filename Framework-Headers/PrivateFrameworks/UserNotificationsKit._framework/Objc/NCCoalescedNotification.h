//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NCDebugInfoProvider-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NCNotificationContent, NCNotificationOptions, NSArray, NSMutableArray, NSString;

@interface NCCoalescedNotification : NSObject <BSDescriptionProviding, NCDebugInfoProvider, NSCopying, NSMutableCopying>
{
    NSMutableArray *_notificationRequests;
    NSString *_sectionIdentifier;
    NSString *_threadIdentifier;
    NCNotificationContent *_content;
    NCNotificationOptions *_options;
}

@property (readonly, copy, nonatomic) NCNotificationContent *content; // @synthesize content=_content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property (readonly, nonatomic) NCNotificationOptions *options; // @synthesize options=_options;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;

- (void).cxx_destruct;
- (BOOL)canCoalesceNotificationRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugInfoPlist;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithCoalescedNotification:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

