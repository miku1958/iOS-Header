//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allowsNotifications;
    BOOL _showsInNotificationCenter;
    BOOL _showsInLockScreen;
    BOOL _showsOnExternalDevices;
    long long _contentPreviewSetting;
    unsigned long long _alertType;
    unsigned long long _pushSettings;
    long long _carPlaySetting;
}

@property (nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
@property (nonatomic) BOOL allowsNotifications; // @synthesize allowsNotifications=_allowsNotifications;
@property (nonatomic) long long carPlaySetting; // @synthesize carPlaySetting=_carPlaySetting;
@property (nonatomic) long long contentPreviewSetting; // @synthesize contentPreviewSetting=_contentPreviewSetting;
@property (nonatomic) unsigned long long pushSettings; // @synthesize pushSettings=_pushSettings;
@property (nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter; // @synthesize showsInNotificationCenter=_showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) BOOL showsOnExternalDevices; // @synthesize showsOnExternalDevices=_showsOnExternalDevices;

+ (id)sectionInfoSettingsForManagedBundleID:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_alertTypeDescription;
- (id)_contentPreviewSettingDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

