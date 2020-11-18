//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationRequest, NCNotificationSectionList, NSArray, NSIndexPath, NSIndexSet, NSString;
@protocol NCNotificationListItem;

@protocol NCNotificationSectionListDelegate <NSObject>
- (NSString *)notificationSectionList:(NCNotificationSectionList *)arg1 coalescingIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didInsertNotificationListItem:(id<NCNotificationListItem>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didInsertNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveNotificationListItem:(id<NCNotificationListItem>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveSectionsAtIndices:(NSIndexSet *)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didReplaceNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 requestsReloadAtIndices:(NSArray *)arg2;
- (BOOL)notificationSectionList:(NCNotificationSectionList *)arg1 shouldInsertForExpandedStackNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationSectionListNeedsReload:(NCNotificationSectionList *)arg1;
@end

