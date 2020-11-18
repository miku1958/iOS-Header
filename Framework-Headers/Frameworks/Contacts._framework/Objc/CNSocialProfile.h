//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayname;
    NSString *_teamIdentifier;
    NSArray *_bundleIdentifiers;
}

@property (copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayname; // @synthesize displayname=_displayname;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property (copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property (copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (id)socialProfileWithDictionaryRepresentation:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 teamIdentifier:(id)arg6 bundleIdentifiers:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 ignoreURLs:(BOOL)arg2;
- (BOOL)isValid:(id *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

