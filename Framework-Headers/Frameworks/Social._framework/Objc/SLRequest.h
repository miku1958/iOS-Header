//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL, OACredential, SLService;

@interface SLRequest : NSObject
{
    ACAccount *_account;
    OACredential *_OAuthCredential;
    long long _requestMethod;
    NSURL *_url;
    NSMutableDictionary *_parameters;
    NSMutableArray *_multiParts;
    NSString *_multiPartBoundary;
    int _callingPID;
    NSString *_applicationID;
    NSString *_contentType;
    NSData *_payload;
    unsigned long long _networkServiceType;
    SLService *_service;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property (strong, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) long long requestMethod; // @synthesize requestMethod=_requestMethod;

+ (id)requestForServiceType:(id)arg1 requestMethod:(long long)arg2 URL:(id)arg3 parameters:(id)arg4;
- (void).cxx_destruct;
- (id)OAuthCredential;
- (id)_HTTPMethodName;
- (void)_addAuthenticationParameters:(id)arg1;
- (id)_allParameters;
- (void)_appendCoreSig1Signature;
- (id)_commandName;
- (id)_parameterString;
- (id)_preparedURL;
- (BOOL)_requiresAuthorization;
- (BOOL)_shouldAppendTencentWeiboParametersToRequest;
- (BOOL)_shouldRetryAfterCount:(int)arg1 delay:(float *)arg2;
- (id)_urlEncodedString:(id)arg1;
- (void)addMultiPart:(id)arg1;
- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 filename:(id)arg4;
- (int)callingPID;
- (id)completeMultiParts;
- (id)dictionaryRepresentationForJSONSerialization;
- (id)init;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;
- (id)multiPartBodyData;
- (id)multiPartBoundary;
- (id)multiParts;
- (unsigned long long)networkServiceType;
- (id)parameterForKey:(id)arg1;
- (void)performJSONRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)performJSONRequestWithHandler:(CDUnknownBlockType)arg1 retryCount:(int)arg2;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)preparedURLRequest;
- (void)removeParameterForKey:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (void)setCallingPID:(int)arg1;
- (void)setContentType:(id)arg1;
- (void)setMultiPartBoundary:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setOAuthCredential:(id)arg1;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2;
- (void)setPayload:(id)arg1;
- (BOOL)shouldIncludeParameterString;

@end

