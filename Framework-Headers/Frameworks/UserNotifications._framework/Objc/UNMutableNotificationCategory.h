//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory
{
}

@property (copy, nonatomic) NSArray *actions; // @dynamic actions;
@property (copy, nonatomic) NSString *actionsMenuTitle; // @dynamic actionsMenuTitle;
@property (copy, nonatomic) UNNotificationAction *alternateAction; // @dynamic alternateAction;
@property (nonatomic) unsigned long long backgroundStyle; // @dynamic backgroundStyle;
@property (copy, nonatomic) NSString *categorySummaryFormat; // @dynamic categorySummaryFormat;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @dynamic hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSArray *intentIdentifiers; // @dynamic intentIdentifiers;
@property (nonatomic) unsigned long long listPriority; // @dynamic listPriority;
@property (copy, nonatomic) NSArray *minimalActions; // @dynamic minimalActions;
@property (nonatomic) unsigned long long options; // @dynamic options;

- (id)initWithIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

