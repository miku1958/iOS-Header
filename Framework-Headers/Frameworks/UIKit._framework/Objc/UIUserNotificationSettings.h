//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _types;
    NSSet *_categories;
}

@property (readonly, copy, nonatomic) NSSet *categories; // @synthesize categories=_categories;
@property (readonly, nonatomic) unsigned long long types; // @synthesize types=_types;

+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;
+ (id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)allowedUserNotificationTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2;
- (id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mayPresentUserNotificationOfType:(unsigned long long)arg1;
- (id)userNotificationActionSettings;
- (id)validatedSettings;

@end

