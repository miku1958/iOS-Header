//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/CALNNotificationContent.h>

@class CALNNotificationSound, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CALNMutableNotificationContent : CALNNotificationContent
{
}

@property (copy, nonatomic) NSString *body; // @dynamic body;
@property (copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;
@property (copy, nonatomic) NSDate *date; // @dynamic date;
@property (copy, nonatomic) NSURL *defaultActionURL; // @dynamic defaultActionURL;
@property (copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property (copy, nonatomic) NSString *iconIdentifier; // @dynamic iconIdentifier;
@property (copy, nonatomic) NSArray *peopleIdentifiers; // @dynamic peopleIdentifiers;
@property (copy, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;
@property (nonatomic) BOOL shouldHideTime; // @dynamic shouldHideTime;
@property (nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; // @dynamic shouldSuppressSyncDismissalWhenRemoved;
@property (copy, nonatomic) CALNNotificationSound *sound; // @dynamic sound;
@property (copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property (copy, nonatomic) NSString *summaryArgument; // @dynamic summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount; // @dynamic summaryArgumentCount;
@property (copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

@end

