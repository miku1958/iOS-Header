//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject
{
    MSOID *_algorithm;
    NSData *_parameters;
    struct AlgorithmIdentifier *_asn1AlgId;
}

@property (readonly) MSOID *algorithm; // @synthesize algorithm=_algorithm;
@property (readonly) struct AlgorithmIdentifier *asn1AlgId; // @synthesize asn1AlgId=_asn1AlgId;
@property (readonly) NSData *parameters; // @synthesize parameters=_parameters;

+ (id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier *)arg1 error:(id *)arg2;
+ (id)algorithmIdentifierWithOID:(id)arg1;
+ (id)digestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (struct AlgorithmIdentifier *)encode;
- (unsigned long long)hash;
- (id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;
- (id)initWithAsn1AlgId:(struct AlgorithmIdentifier *)arg1 error:(id *)arg2;
- (id)initWithOID:(id)arg1;
- (id)initWithOID:(id)arg1 parameters:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)signatureAlgorithmWithDigestAlgorithm:(id)arg1 error:(id *)arg2;

@end

