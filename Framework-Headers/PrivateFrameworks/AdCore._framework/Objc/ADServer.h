//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdCore/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer : ADSingleton <NSURLSessionDelegate>
{
    int _configurationExpirationTime;
    NSDictionary *_configurations;
    NSURLSession *_session;
}

@property int configurationExpirationTime; // @synthesize configurationExpirationTime=_configurationExpirationTime;
@property (strong) NSDictionary *configurations; // @synthesize configurations=_configurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)workQueue;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)buildConfigurationDictionary:(id)arg1;
- (id)deserializeMessage:(id)arg1 error:(id *)arg2;
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)restoreConfiguration;
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;
- (id)serializeMessage:(id)arg1;
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;
- (BOOL)shouldRestoreConfiguration;

@end
