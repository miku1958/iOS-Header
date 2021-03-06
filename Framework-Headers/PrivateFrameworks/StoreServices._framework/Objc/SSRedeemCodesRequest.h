//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, SSAuthenticationContext;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    NSArray *_redeemCodes;
    BOOL _headless;
    BOOL _cameraRecognized;
    NSDictionary *_params;
    NSString *_logCorrelationKey;
}

@property (copy) SSAuthenticationContext *authenticationContext;
@property BOOL cameraRecognized; // @synthesize cameraRecognized=_cameraRecognized;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL headless; // @synthesize headless=_headless;
@property (strong, nonatomic) NSString *logCorrelationKey; // @synthesize logCorrelationKey=_logCorrelationKey;
@property (strong, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property (readonly) NSArray *redeemCodes;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithRedeemCodes:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startWithRedeemResponseBlock:(CDUnknownBlockType)arg1;

@end

