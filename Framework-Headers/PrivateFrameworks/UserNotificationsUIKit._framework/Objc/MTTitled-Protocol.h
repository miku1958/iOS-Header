//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/MTContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSDate, NSString, NSTimeZone, UIButton, UIImage;

@protocol MTTitled <NSObject, MTContentSizeCategoryAdjusting>

@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (strong, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIButton *iconButton;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;

@end

