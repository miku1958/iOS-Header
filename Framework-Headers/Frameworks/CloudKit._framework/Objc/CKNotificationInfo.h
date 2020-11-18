//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldBadge;
    BOOL _shouldSendContentAvailable;
    BOOL _shouldSendMutableContent;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_title;
    NSString *_titleLocalizationKey;
    NSArray *_titleLocalizationArgs;
    NSString *_subtitle;
    NSString *_subtitleLocalizationKey;
    NSArray *_subtitleLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSString *_soundName;
    NSArray *_desiredKeys;
    NSString *_category;
    NSString *_collapseIDKey;
}

@property (copy, nonatomic) NSString *alertActionLocalizationKey; // @synthesize alertActionLocalizationKey=_alertActionLocalizationKey;
@property (copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
@property (copy, nonatomic) NSString *alertLaunchImage; // @synthesize alertLaunchImage=_alertLaunchImage;
@property (copy, nonatomic) NSArray *alertLocalizationArgs; // @synthesize alertLocalizationArgs=_alertLocalizationArgs;
@property (copy, nonatomic) NSString *alertLocalizationKey; // @synthesize alertLocalizationKey=_alertLocalizationKey;
@property (copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (copy, nonatomic) NSString *collapseIDKey; // @synthesize collapseIDKey=_collapseIDKey;
@property (copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (nonatomic) BOOL shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property (nonatomic) BOOL shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property (nonatomic) BOOL shouldSendMutableContent; // @synthesize shouldSendMutableContent=_shouldSendMutableContent;
@property (copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSArray *subtitleLocalizationArgs; // @synthesize subtitleLocalizationArgs=_subtitleLocalizationArgs;
@property (copy, nonatomic) NSString *subtitleLocalizationKey; // @synthesize subtitleLocalizationKey=_subtitleLocalizationKey;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSArray *titleLocalizationArgs; // @synthesize titleLocalizationArgs=_titleLocalizationArgs;
@property (copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;

+ (id)notificationInfo;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setAlertActionLocalizationKeyNoValidate:(id)arg1;
- (void)_setAlertBodyNoValidate:(id)arg1;
- (void)_setAlertLaunchImageNoValidate:(id)arg1;
- (void)_setAlertLocalizationArgsNoValidate:(id)arg1;
- (void)_setAlertLocalizationKeyNoValidate:(id)arg1;
- (void)_setCategoryNoValidate:(id)arg1;
- (void)_setShouldBadgeNoValidate:(BOOL)arg1;
- (void)_setShouldSendContentAvailableNoValidate:(BOOL)arg1;
- (void)_setShouldSendMutableContentNoValidate:(BOOL)arg1;
- (void)_setSoundNameNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setSubtitleNoValidate:(id)arg1;
- (void)_setTitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setTitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setTitleNoValidate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
