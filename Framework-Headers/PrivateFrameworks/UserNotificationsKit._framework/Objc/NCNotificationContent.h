//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;

@interface NCNotificationContent : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSString *_header;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    NSArray *_icons;
    NSArray *_carPlayIcons;
    UIImage *_attachmentImage;
    NSDate *_date;
    BOOL _dateAllDay;
    NSTimeZone *_timeZone;
    NSString *_topic;
}

@property (readonly, nonatomic) UIImage *attachmentImage; // @synthesize attachmentImage=_attachmentImage;
@property (readonly, nonatomic) UIImage *carPlayIcon;
@property (readonly, nonatomic) NSArray *carPlayIcons; // @synthesize carPlayIcons=_carPlayIcons;
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat; // @synthesize categorySummaryFormat=_categorySummaryFormat;
@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay; // @synthesize dateAllDay=_dateAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property (readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly, copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property (readonly, nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
