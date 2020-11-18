//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/TransparencyLogClient.h>

@class NSURL;

@interface KTLogClient : TransparencyLogClient
{
    BOOL _configured;
    NSURL *_queryURI;
    NSURL *_consistencyProofURI;
    NSURL *_publicKeysURI;
    double _expirationTime;
}

@property BOOL configured; // @synthesize configured=_configured;
@property (strong) NSURL *consistencyProofURI; // @synthesize consistencyProofURI=_consistencyProofURI;
@property double expirationTime; // @synthesize expirationTime=_expirationTime;
@property (strong) NSURL *publicKeysURI; // @synthesize publicKeysURI=_publicKeysURI;
@property (strong) NSURL *queryURI; // @synthesize queryURI=_queryURI;

+ (id)configBagRequest;
+ (id)configBagURL;
+ (id)formatEventName:(id)arg1 application:(id)arg2 state:(id)arg3;
+ (id)formatEventName:(id)arg1 state:(id)arg2;
- (void).cxx_destruct;
- (void)clearState:(id *)arg1;
- (BOOL)configurationExpired;
- (void)configure:(CDUnknownBlockType)arg1;
- (BOOL)configureFromNetworkBag:(id)arg1 error:(id *)arg2;
- (BOOL)configureWithDisk:(id *)arg1;
- (id)copyConfigurationBag:(id *)arg1;
- (void)downloadConsistencyProof:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadPublicKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadQuery:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPublicKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchQuery:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)handleQueryResponse:(id)arg1 fetchError:(id)arg2 application:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)processConfigBagData:(id)arg1 error:(id *)arg2;
- (id)readConfigFromDisk:(id *)arg1;
- (BOOL)validateConfigBagCertificates:(id)arg1 error:(id *)arg2;
- (BOOL)validateConfigBagEntries:(id)arg1 error:(id *)arg2;
- (BOOL)validateConfigBagSignature:(id)arg1 error:(id *)arg2;
- (BOOL)validateConfigEntries:(id)arg1 error:(id *)arg2;
- (BOOL)writeConfigToDisk:(id)arg1 error:(id *)arg2;

@end
