//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FoundInAppsPlugins/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface FIAPEntity : NSObject <NSSecureCoding>
{
    unsigned char _type;
    NSString *_name;
    NSString *_languageIdentifier;
    NSString *_pluginIdentifier;
    NSString *_bundleIdentifier;
    NSString *_domainIdentifier;
    NSString *_uniqueIdentifier;
    NSString *_activityType;
    NSDate *_contentCreationDate;
    NSDate *_detectionDate;
}

@property (copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSDate *contentCreationDate; // @synthesize contentCreationDate=_contentCreationDate;
@property (copy, nonatomic) NSDate *detectionDate; // @synthesize detectionDate=_detectionDate;
@property (copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property (readonly, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *pluginIdentifier; // @synthesize pluginIdentifier=_pluginIdentifier;
@property (readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)entityWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEntity:(id)arg1;

@end

