//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PPContactQuery : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _domain;
    BOOL _onlyQueryMostRelevantContacts;
    NSArray *_matchingIdentifiers;
    NSString *_matchingName;
    NSString *_matchingEmail;
    NSString *_matchingPhone;
    NSString *_matchingPostalAddress;
    NSString *_targetBundleIdentifier;
    NSString *_context;
}

@property (strong, nonatomic) NSString *context; // @synthesize context=_context;
@property (nonatomic) unsigned char domain; // @synthesize domain=_domain;
@property (strong, nonatomic) NSString *matchingEmail; // @synthesize matchingEmail=_matchingEmail;
@property (strong, nonatomic) NSArray *matchingIdentifiers; // @synthesize matchingIdentifiers=_matchingIdentifiers;
@property (strong, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property (strong, nonatomic) NSString *matchingPhone; // @synthesize matchingPhone=_matchingPhone;
@property (strong, nonatomic) NSString *matchingPostalAddress; // @synthesize matchingPostalAddress=_matchingPostalAddress;
@property BOOL onlyQueryMostRelevantContacts; // @synthesize onlyQueryMostRelevantContacts=_onlyQueryMostRelevantContacts;
@property (strong, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasNoConstraints;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactQuery:(id)arg1;

@end
