//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKPublicKey, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation
{
    CKPublicKey *_transcodeServerPublicKey;
    NSString *_transcodeServerHostname;
    NSURL *_transcodeServerPublicKeyURL;
}

@property (readonly, nonatomic) NSString *transcodeServerHostname; // @synthesize transcodeServerHostname=_transcodeServerHostname;
@property (strong) CKPublicKey *transcodeServerPublicKey; // @synthesize transcodeServerPublicKey=_transcodeServerPublicKey;
@property (strong, nonatomic) NSURL *transcodeServerPublicKeyURL; // @synthesize transcodeServerPublicKeyURL=_transcodeServerPublicKeyURL;

+ (struct __SecPolicy *)createTranscodeServerTrustPolicy;
- (void).cxx_destruct;
- (void)determineTranscodeServerPublicKeyURL;
- (void)fetchCachedTranscodePublicKey;
- (void)fetchRemoteTranscodePublicKey;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end
