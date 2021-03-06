//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding>
{
    long long _globalContentPreviewSetting;
    long long _globalSpokenNotificationSetting;
}

@property (nonatomic) long long globalContentPreviewSetting; // @synthesize globalContentPreviewSetting=_globalContentPreviewSetting;
@property (nonatomic) long long globalSpokenNotificationSetting; // @synthesize globalSpokenNotificationSetting=_globalSpokenNotificationSetting;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

