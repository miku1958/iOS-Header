//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>
#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>
#import <CoreSuggestionsInternals/SGSpotlightIdentifiers-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers>
{
    BOOL _isSent;
    NSString *_subject;
    NSString *_textContent;
    NSDate *_date;
    NSString *_bundleIdentifier;
    NSString *_uniqueIdentifier;
    NSString *_domainIdentifier;
    NSArray *_attachments;
    NSArray *_accountHandles;
}

@property (copy, nonatomic) NSArray *accountHandles; // @synthesize accountHandles=_accountHandles;
@property (readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSent; // @synthesize isSent=_isSent;
@property (copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)fromDictionary:(id)arg1;
+ (id)messageWithSearchableItem:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)asDictionary;
- (unsigned long long)contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (BOOL)isEqualToMessage:(id)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;
- (id)spotlightUniqueIdentifier;

@end

