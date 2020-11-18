//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BSDescriptionProviding-Protocol.h>

@class NSDate, NSMutableArray, NSString;

@interface NCNotificationListSection : NSObject <BSDescriptionProviding>
{
    NSString *_title;
    NSString *_identifier;
    NSMutableArray *_notificationRequests;
}

@property (readonly, nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableArray *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property (strong, nonatomic) NSDate *sectionDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (unsigned long long)_indexOfRequestMatchingRequest:(id)arg1;
- (unsigned long long)_insertionIndexForNotificationRequest:(id)arg1;
- (id)_matchIdentifierForNotificationRequest:(id)arg1;
- (unsigned long long)addNotificationRequest:(id)arg1;
- (id)allNotificationRequests;
- (BOOL)containsNotificationRequestMatchingRequest:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)indexForNotificationRequest:(id)arg1;
- (unsigned long long)indexForNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (unsigned long long)replaceNotificationRequest:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

