//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class KTInclusionProofVerifier, LogEntry, MapEntry, NSData, NSDictionary, TransparencyManagedDataStore;

@interface InclusionProof : GPBMessage <TransparencyVerifiable>
{
}

@property (strong) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasMapEntry; // @dynamic hasMapEntry;
@property (nonatomic) BOOL hasPerApplicationTreeEntry; // @dynamic hasPerApplicationTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry; // @dynamic hasTopLevelTreeEntry;
@property (strong, nonatomic) MapEntry *mapEntry; // @dynamic mapEntry;
@property (readonly) NSDictionary *metadata;
@property (strong, nonatomic) LogEntry *perApplicationTreeEntry; // @dynamic perApplicationTreeEntry;
@property (strong, nonatomic) LogEntry *topLevelTreeEntry; // @dynamic topLevelTreeEntry;
@property (copy, nonatomic) NSData *uriVrfoutput; // @dynamic uriVrfoutput;
@property (strong) KTInclusionProofVerifier *verifier;

+ (id)descriptor;
- (id)mapLeafWithError:(id *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;
- (unsigned long long)verifyWithError:(id *)arg1;

@end
