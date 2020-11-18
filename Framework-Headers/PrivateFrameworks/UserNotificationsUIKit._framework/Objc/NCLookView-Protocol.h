//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSDate, NSString, NSTimeZone, UIButton, UIImage, UIView;

@protocol NCLookView <NSObject, NCContentSizeCategoryAdjusting>

@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (nonatomic, getter=isBanner) BOOL banner;
@property (strong, nonatomic) UIView *colorInfusionView;
@property (readonly, nonatomic) UIView *customContentView;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (strong, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIButton *iconButton;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;

- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
@end
