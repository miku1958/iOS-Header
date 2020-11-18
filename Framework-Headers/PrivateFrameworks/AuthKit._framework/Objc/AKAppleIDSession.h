//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSURLSessionAppleIDContext-Protocol.h>

@class AKAnisetteData, AKAnisetteProvisioningController, NSString;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext>
{
    NSString *_serviceID;
    AKAnisetteProvisioningController *_anisetteController;
    AKAnisetteData *_proxiedAnisetteData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AKAnisetteData *proxiedAnisetteData; // @synthesize proxiedAnisetteData=_proxiedAnisetteData;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_anisetteController;
- (void)_generateAppleIDHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)appleIDHeadersForRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(BOOL *)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)relevantHTTPStatusCodes;

@end

