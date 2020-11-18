//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationContent.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;

@interface NCMutableNotificationContent : NCNotificationContent
{
}

@property (strong, nonatomic) UIImage *attachmentImage; // @dynamic attachmentImage;
@property (strong, nonatomic) UIImage *carPlayIcon; // @dynamic carPlayIcon;
@property (strong, nonatomic) NSArray *carPlayIcons; // @dynamic carPlayIcons;
@property (copy, nonatomic) NSString *categorySummaryFormat; // @dynamic categorySummaryFormat;
@property (strong, nonatomic) NSDate *date; // @dynamic date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay; // @dynamic dateAllDay;
@property (copy, nonatomic) NSString *header; // @dynamic header;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @dynamic hiddenPreviewsBodyPlaceholder;
@property (strong, nonatomic) UIImage *icon; // @dynamic icon;
@property (strong, nonatomic) NSArray *icons; // @dynamic icons;
@property (copy, nonatomic) NSString *message; // @dynamic message;
@property (copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property (copy, nonatomic) NSString *summaryArgument; // @dynamic summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount; // @dynamic summaryArgumentCount;
@property (strong, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property (copy, nonatomic) NSString *title; // @dynamic title;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
