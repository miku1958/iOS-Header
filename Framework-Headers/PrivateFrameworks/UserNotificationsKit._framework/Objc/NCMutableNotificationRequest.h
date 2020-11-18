//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@class NCNotificationAction, NCNotificationContent, NCNotificationOptions, NCNotificationSound, NSArray, NSDate, NSDictionary, NSSet, NSString, UNNotification;

@interface NCMutableNotificationRequest : NCNotificationRequest
{
}

@property (copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;
@property (strong, nonatomic) NCNotificationAction *clearAction; // @dynamic clearAction;
@property (strong, nonatomic) NCNotificationAction *closeAction; // @dynamic closeAction;
@property (nonatomic) unsigned long long collapsedNotificationsCount; // @dynamic collapsedNotificationsCount;
@property (strong, nonatomic) NCNotificationContent *content; // @dynamic content;
@property (copy, nonatomic) NSDictionary *context; // @dynamic context;
@property (nonatomic, getter=isCriticalAlert) BOOL criticalAlert; // @dynamic criticalAlert;
@property (strong, nonatomic) NCNotificationAction *defaultAction; // @dynamic defaultAction;
@property (copy, nonatomic) NSString *highestPrioritySubSectionIdentifier; // @dynamic highestPrioritySubSectionIdentifier;
@property (nonatomic) BOOL isCollapsedNotification; // @dynamic isCollapsedNotification;
@property (copy, nonatomic) NSString *notificationIdentifier; // @dynamic notificationIdentifier;
@property (strong, nonatomic) NCNotificationOptions *options; // @dynamic options;
@property (copy, nonatomic) NSString *parentSectionIdentifier; // @dynamic parentSectionIdentifier;
@property (copy, nonatomic) NSArray *peopleIdentifiers; // @dynamic peopleIdentifiers;
@property (copy, nonatomic) NSSet *requestDestinations; // @dynamic requestDestinations;
@property (copy, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;
@property (copy, nonatomic) NSSet *settingsSections; // @dynamic settingsSections;
@property (strong, nonatomic) NCNotificationAction *silenceAction; // @dynamic silenceAction;
@property (strong, nonatomic) NCNotificationSound *sound; // @dynamic sound;
@property (copy, nonatomic) NSDictionary *sourceInfo; // @dynamic sourceInfo;
@property (copy, nonatomic) NSSet *subSectionIdentifiers; // @dynamic subSectionIdentifiers;
@property (copy, nonatomic) NSDictionary *supplementaryActions; // @dynamic supplementaryActions;
@property (copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property (strong, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property (nonatomic, getter=isUniqueThreadIdentifier) BOOL uniqueThreadIdentifier; // @dynamic uniqueThreadIdentifier;
@property (strong, nonatomic) UNNotification *userNotification; // @dynamic userNotification;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

