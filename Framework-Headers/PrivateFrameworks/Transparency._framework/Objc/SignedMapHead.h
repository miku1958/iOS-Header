//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class MapHead, NSData, Signature, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedMapHead : GPBMessage <TransparencyVerifiable>
{
}

@property (strong) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasSignature; // @dynamic hasSignature;
@property (copy, nonatomic) NSData *mapHead; // @dynamic mapHead;
@property (readonly) MapHead *parsedMapHead;
@property (strong, nonatomic) Signature *signature; // @dynamic signature;
@property (strong) TransparencySignatureVerifier *verifier;

+ (id)descriptor;
- (id)copyManagedObject:(id *)arg1;
- (id)createManagedObjectWithError:(id *)arg1;
- (unsigned long long)verifyWithError:(id *)arg1;

@end

