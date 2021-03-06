//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSNumber, NSString;

@interface ECDKIMMessageHeader : NSObject
{
    NSMutableDictionary *_headerFields;
    NSString *_version;
    unsigned long long _signingAlgorithm;
    unsigned long long _hashingAlgorithm;
    NSData *_signatureData;
    NSString *_canonicalizedBodyHash;
    unsigned long long _bodyCanonicalizationAlgorithm;
    unsigned long long _headerCanonicalizationAlgorithm;
    NSString *_signingDomainIdentifier;
    NSArray *_signedHeaderFields;
    NSString *_agentOrUserIdentifier;
    NSNumber *_bodyLength;
    NSArray *_queryMethods;
    NSString *_selector;
    double _signatureTimestamp;
    double _signatureExpiration;
    NSArray *_copiedHeaderFields;
    NSString *_headerNameForCanonicalization;
    NSString *_bodyForCanonicalization;
}

@property (readonly, copy, nonatomic) NSString *agentOrUserIdentifier; // @synthesize agentOrUserIdentifier=_agentOrUserIdentifier;
@property (readonly, nonatomic) unsigned long long bodyCanonicalizationAlgorithm; // @synthesize bodyCanonicalizationAlgorithm=_bodyCanonicalizationAlgorithm;
@property (readonly, nonatomic) NSString *bodyForCanonicalization; // @synthesize bodyForCanonicalization=_bodyForCanonicalization;
@property (readonly, nonatomic) NSNumber *bodyLength; // @synthesize bodyLength=_bodyLength;
@property (readonly, copy, nonatomic) NSString *canonicalizedBodyHash; // @synthesize canonicalizedBodyHash=_canonicalizedBodyHash;
@property (readonly, nonatomic) NSArray *copiedHeaderFields; // @synthesize copiedHeaderFields=_copiedHeaderFields;
@property (readonly, nonatomic) unsigned long long hashingAlgorithm; // @synthesize hashingAlgorithm=_hashingAlgorithm;
@property (readonly, nonatomic) unsigned long long headerCanonicalizationAlgorithm; // @synthesize headerCanonicalizationAlgorithm=_headerCanonicalizationAlgorithm;
@property (readonly, nonatomic) NSString *headerNameForCanonicalization; // @synthesize headerNameForCanonicalization=_headerNameForCanonicalization;
@property (readonly, copy, nonatomic) NSArray *queryMethods; // @synthesize queryMethods=_queryMethods;
@property (readonly, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property (readonly, copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property (readonly, nonatomic) double signatureExpiration; // @synthesize signatureExpiration=_signatureExpiration;
@property (readonly, nonatomic) double signatureTimestamp; // @synthesize signatureTimestamp=_signatureTimestamp;
@property (readonly, copy, nonatomic) NSArray *signedHeaderFields; // @synthesize signedHeaderFields=_signedHeaderFields;
@property (readonly, nonatomic) unsigned long long signingAlgorithm; // @synthesize signingAlgorithm=_signingAlgorithm;
@property (readonly, copy, nonatomic) NSString *signingDomainIdentifier; // @synthesize signingDomainIdentifier=_signingDomainIdentifier;
@property (readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)_errorForInvalidOptionalKey:(id)arg1 actualValue:(id)arg2 expectedValue:(id)arg3;
- (id)_errorForInvalidRequiredKey:(id)arg1 actualValue:(id)arg2 expectedValue:(id)arg3;
- (id)_errorForMissingRequiredKey:(id)arg1;
- (id)_errorWithType:(long long)arg1 reason:(id)arg2;
- (BOOL)_isValidDomain:(id)arg1;
- (id)_parseAgentOrUserIdentifierWithSigningDomainIdentifier:(id)arg1;
- (id)_parseBodyLength;
- (id)_parseCanonicalizedBodyHash;
- (id)_parseCopiedHeaderFields;
- (id)_parseMessageCanonicalizationAlgorithm;
- (id)_parseQueryMethod;
- (id)_parseSelector;
- (id)_parseSignatureDataWithHeaderBody:(id)arg1;
- (id)_parseSignatureExpiration;
- (id)_parseSignatureTimestamp;
- (id)_parseSignedHeaderFields;
- (id)_parseSigningAlgorithm;
- (id)_parseSigningDomainIdentifier;
- (id)_parseTagValueList:(id)arg1;
- (id)_parseVersion;
- (id)initWithHeaderFieldName:(id)arg1 headerBody:(id)arg2 error:(out id *)arg3;

@end

