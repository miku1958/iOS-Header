//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class CLKUserActivity, NSArray, NSDictionary, NSLocale, NSString, NSUserActivity;

@interface CLKComplicationDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _needsAppNotify;
    NSString *_identifier;
    NSString *_displayName;
    NSArray *_supportedFamilies;
    NSDictionary *_userInfo;
    NSLocale *_locale;
    CLKUserActivity *_clkUserActivity;
}

@property (strong, nonatomic) CLKUserActivity *clkUserActivity; // @synthesize clkUserActivity=_clkUserActivity;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) BOOL needsAppNotify; // @synthesize needsAppNotify=_needsAppNotify;
@property (readonly, nonatomic) NSArray *supportedFamilies; // @synthesize supportedFamilies=_supportedFamilies;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)allowedDictionaryClasses;
+ (id)legacyComplicationDescriptor;
+ (id)legacyComplicationDescriptorWithSupportedFamilies:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasUserInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 userActivity:(id)arg4;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 userInfo:(id)arg4;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)validate;

@end

