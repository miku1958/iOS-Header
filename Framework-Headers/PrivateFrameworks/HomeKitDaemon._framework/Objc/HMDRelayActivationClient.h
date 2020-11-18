//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPRelayActivationClient.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRelayActivationClient : HAPRelayActivationClient
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_challengeIdentifier;
}

@property (strong, nonatomic) NSString *challengeIdentifier; // @synthesize challengeIdentifier=_challengeIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (id)init;
- (void)open;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;

@end

