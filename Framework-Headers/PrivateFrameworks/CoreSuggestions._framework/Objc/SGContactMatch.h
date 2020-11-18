//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, SGContact, SGObject, SGRecordId;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_matchingFieldRecordId;
    long long _matchingFieldType;
    SGContact *_contact;
    NSArray *_matchTokens;
}

@property (readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) NSArray *matchTokens; // @synthesize matchTokens=_matchTokens;
@property (readonly, nonatomic) SGObject *matchingField;
@property (readonly, nonatomic) long long matchingFieldType; // @synthesize matchingFieldType=_matchingFieldType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingPostalAddressRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingPostalAddressRecordId:(id)arg2 matchTokens:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactMatch:(id)arg1;

@end
