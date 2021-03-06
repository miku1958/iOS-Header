//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OACredential;

@interface OAURLRequestSigner : NSObject
{
    OACredential *_credential;
    int _signatureMethod;
}

@property (nonatomic) int signatureMethod; // @synthesize signatureMethod=_signatureMethod;

- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(BOOL)arg3;
- (void)dealloc;
- (id)initWithCredential:(id)arg1;
- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;
- (id)oauthNonce;
- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;
- (id)signatureMethodString;
- (id)signedURLRequestWithRequest:(id)arg1;
- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (Class)signer;
- (id)timestamp:(id)arg1;

@end

