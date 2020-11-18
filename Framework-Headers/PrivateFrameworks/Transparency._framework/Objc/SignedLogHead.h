//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class LogHead, NSData, Signature, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedLogHead : GPBMessage <TransparencyVerifiable>
{
}

@property (strong) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasSignature; // @dynamic hasSignature;
@property (copy, nonatomic) NSData *logHead; // @dynamic logHead;
@property (readonly) LogHead *parsedLogHead;
@property (strong, nonatomic) Signature *signature; // @dynamic signature;
@property (strong) TransparencySignatureVerifier *verifier;

+ (id)descriptor;
- (id)copyManagedObject:(id *)arg1;
- (id)createManagedObjectWithError:(id *)arg1;
- (void)storeSignatureResult:(unsigned long long)arg1 signatureError:(id *)arg2;
- (unsigned long long)verifyWithError:(id *)arg1;

@end
