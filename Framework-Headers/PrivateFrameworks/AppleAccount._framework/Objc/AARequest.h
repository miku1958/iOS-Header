//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSURLSessionDataDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _handler;
    NSString *_initialURLString;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
    BOOL _flushCache;
    NSDictionary *_customHeaders;
}

@property (copy, nonatomic) NSDictionary *customHeaders; // @synthesize customHeaders=_customHeaders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL flushCache; // @synthesize flushCache=_flushCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSURLRequest *urlRequest;

+ (id)protocolVersion;
+ (id)redactedHeadersFromHTTPHeaders:(id)arg1;
+ (Class)responseClass;
- (void).cxx_destruct;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_performRequestWithSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)bodyDictionary;
- (void)dealloc;
- (id)initWithURLString:(id)arg1;
- (void)performRequestForDevice:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)performSignedRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (id)urlCredential;
- (id)urlString;

@end

