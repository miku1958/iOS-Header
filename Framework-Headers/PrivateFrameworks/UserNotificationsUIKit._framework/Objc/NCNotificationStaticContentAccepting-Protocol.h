//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage, UIView;

@protocol NCNotificationStaticContentAccepting <NSObject>

@property (strong, nonatomic) UIView *accessoryView;
@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSString *hintText;
@property (strong, nonatomic) UIImage *icon;
@property (strong, nonatomic) NSArray *interfaceActions;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) BOOL showAdditionalMessageLines;
@property (strong, nonatomic) UIImage *thumbnail;
@property (nonatomic) long long thumbnailViewContentMode;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;


@optional
@end
