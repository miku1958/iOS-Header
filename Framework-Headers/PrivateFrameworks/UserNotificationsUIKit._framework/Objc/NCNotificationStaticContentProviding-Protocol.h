//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;
@protocol NCNotificationStaticContentProvidingDelegate;

@protocol NCNotificationStaticContentProviding <NSObject>

@property (readonly, copy, nonatomic) CDUnknownBlockType cancelAction;
@property (readonly, copy, nonatomic) CDUnknownBlockType clearAction;
@property (readonly, copy, nonatomic) CDUnknownBlockType closeAction;
@property (readonly, nonatomic) unsigned long long coalesceCount;
@property (readonly, copy, nonatomic) NSArray *currentActions;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (readonly, copy, nonatomic) CDUnknownBlockType defaultAction;
@property (weak, nonatomic) id<NCNotificationStaticContentProvidingDelegate> delegate;
@property (readonly, nonatomic) NSArray *icons;
@property (readonly, nonatomic) NSArray *interfaceActions;
@property (readonly, copy, nonatomic) CDUnknownBlockType nilAction;
@property (readonly, nonatomic, getter=isNumberOfLinesInfinite) BOOL numberOfLinesInfinite;
@property (copy, nonatomic) NSArray *overriddenActions;
@property (readonly, copy, nonatomic) NSString *primarySubtitleText;
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) BOOL showsTextInputOnAppearance;
@property (readonly, copy, nonatomic) NSString *summaryText;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSString *title;

@end

