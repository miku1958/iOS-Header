//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__NCNotificationStructuredSectionListAccessibility_super.h"

@interface NCNotificationStructuredSectionListAccessibility : __NCNotificationStructuredSectionListAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_axIgnoreNotification;
- (void)_axSetIgnoreNotification:(BOOL)arg1;
- (void)_toggleHiddenNotificationsOnAuthenticationChange:(BOOL)arg1;
- (id)axStringForRequest:(id)arg1 label:(id)arg2;
- (void)insertNotificationRequest:(id)arg1;
- (void)mergeNotificationGroups:(id)arg1;
- (id)notificationGroupListsForMigrationPassingTest:(CDUnknownBlockType)arg1 filterPersistentRequests:(BOOL)arg2;

@end
