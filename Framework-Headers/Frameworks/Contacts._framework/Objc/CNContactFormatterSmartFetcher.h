//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNSmartPropertyFetcher.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher
{
    BOOL _ignoresNickname;
    BOOL _ignoresOrganization;
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

@property (copy, nonatomic) NSDictionary *fallBackNamePropertyByNameKey; // @synthesize fallBackNamePropertyByNameKey=_fallBackNamePropertyByNameKey;
@property (nonatomic) BOOL ignoresNickname; // @synthesize ignoresNickname=_ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization; // @synthesize ignoresOrganization=_ignoresOrganization;
@property (copy, nonatomic) NSSet *mandatoryNameProperties; // @synthesize mandatoryNameProperties=_mandatoryNameProperties;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setupNameKeys;

@end
