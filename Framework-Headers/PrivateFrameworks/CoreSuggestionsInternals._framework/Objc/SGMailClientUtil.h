//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ECDKIMVerifier, EMDaemonInterface;

@interface SGMailClientUtil : NSObject
{
    EMDaemonInterface *_emailDaemon;
    ECDKIMVerifier *_dkimVerifier;
}

@property (readonly, nonatomic) ECDKIMVerifier *dkimVerifier; // @synthesize dkimVerifier=_dkimVerifier;
@property (readonly, nonatomic) EMDaemonInterface *emailDaemon; // @synthesize emailDaemon=_emailDaemon;

+ (id)convertLineEndingsToNetwork:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)allVIPEmailAddresses;
- (id)dataForMessageWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)isMessageAvailable:(id)arg1;
- (id)messageWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)signaturesToRemoveForDKIMVerificationContext:(id)arg1 withFromHeaderDomain:(id)arg2;
- (long long)verifyDKIMSignatureForMailWithData:(id)arg1 error:(id *)arg2;
- (long long)verifyDKIMSignatureForMailWithData:(id)arg1 options:(long long)arg2 error:(id *)arg3;
- (long long)verifyDKIMSignatureForMailWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)verifyDKIMSignatureForPipelineEntity:(id)arg1 error:(id *)arg2;
- (long long)verifyDKIMSignatureForStorageEvent:(id)arg1 error:(id *)arg2;

@end

