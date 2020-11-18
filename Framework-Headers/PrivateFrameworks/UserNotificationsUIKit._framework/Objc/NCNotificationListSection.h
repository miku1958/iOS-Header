//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BSDescriptionProviding-Protocol.h>

@class NSArray, NSDate, NSHashTable, NSMutableOrderedSet, NSString;
@protocol NCNotificationListSectionDelegate;

@interface NCNotificationListSection : NSObject <BSDescriptionProviding>
{
    id<NCNotificationListSectionDelegate> _delegate;
    NSString *_title;
    NSString *_identifier;
    NSMutableOrderedSet *_notificationListItems;
    NSHashTable *_notificationListItemsHashTable;
}

@property (readonly, nonatomic) NSArray *allNotificationRequests;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationListSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableOrderedSet *notificationListItems; // @synthesize notificationListItems=_notificationListItems;
@property (strong, nonatomic) NSHashTable *notificationListItemsHashTable; // @synthesize notificationListItemsHashTable=_notificationListItemsHashTable;
@property (strong, nonatomic) NSDate *sectionDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)_coalescingIdentifierForNotificationRequest:(id)arg1;
- (BOOL)_containsNotificationListItem:(id)arg1;
- (unsigned long long)_indexOfListItemMatchingListItem:(id)arg1;
- (unsigned long long)_indexOfListItemWithCoalescingIdentifier:(id)arg1;
- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (unsigned long long)_insertionIndexForNotificationRequestItem:(id)arg1;
- (unsigned long long)_insertionIndexIfExistingCoalescedNotificationForNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexIfNonExpandedNotificationRequest:(id)arg1;
- (unsigned long long)_nextIndexOfExpandedNotificationStackStartingAtIndex:(unsigned long long)arg1 coalescingIdentifier:(id)arg2;
- (id)_notificationRequestForListItem:(id)arg1;
- (id)_notificationRequestItemForListItem:(id)arg1;
- (id)_notificationRequestItemForNotificationRequest:(id)arg1;
- (BOOL)_shouldInsertForExpandedStackNotificationRequest:(id)arg1;
- (BOOL)containsNotificationRequestMatchingRequest:(id)arg1;
- (BOOL)containsNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)indexForNotificationListItem:(id)arg1;
- (long long)indexForNotificationRequest:(id)arg1;
- (unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (unsigned long long)insertNotificationListItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)insertNotificationRequest:(id)arg1;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
- (unsigned long long)modifyNotificationRequest:(id)arg1;
- (id)notificationListItemAtIndex:(unsigned long long)arg1;
- (id)notificationRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeNotificationListItem:(id)arg1;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

