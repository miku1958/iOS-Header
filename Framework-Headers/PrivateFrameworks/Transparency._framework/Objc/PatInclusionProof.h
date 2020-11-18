//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class KTPatInclusionProofVerifier, LogEntry, NSDictionary, TransparencyManagedDataStore;

@interface PatInclusionProof : GPBMessage <TransparencyVerifiable>
{
}

@property (strong) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasPerApplicationTreeEntry; // @dynamic hasPerApplicationTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry; // @dynamic hasTopLevelTreeEntry;
@property (readonly) NSDictionary *metadata;
@property (readonly) unsigned long long patLogBeginningMs;
@property (strong, nonatomic) LogEntry *perApplicationTreeEntry; // @dynamic perApplicationTreeEntry;
@property (readonly) unsigned long long tltLogBeginningMs;
@property (strong, nonatomic) LogEntry *topLevelTreeEntry; // @dynamic topLevelTreeEntry;
@property (strong) KTPatInclusionProofVerifier *verifier;

+ (id)descriptor;
- (id)patSigningKeyWithError:(id *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;
- (unsigned long long)verifyWithError:(id *)arg1;
- (id)vrfPublicKeyWithError:(id *)arg1;

@end
