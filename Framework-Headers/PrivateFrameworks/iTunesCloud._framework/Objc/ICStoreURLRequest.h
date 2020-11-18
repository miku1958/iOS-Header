//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICURLRequest.h>

@class ICJSSignConfiguration, ICStoreRequestContext, NSArray, NSDictionary, NSString;

@interface ICStoreURLRequest : ICURLRequest
{
    BOOL _shouldUseMescalSigning;
    BOOL _shouldParseBodyData;
    BOOL _shouldRequireURLBag;
    long long _anisetteVersion;
    NSString *_machineDataSyncState;
    NSDictionary *_additionalHTTPCookies;
    NSArray *_additionalQueryItems;
    ICJSSignConfiguration *_JSSignConfiguration;
}

@property (copy, nonatomic) ICJSSignConfiguration *JSSignConfiguration; // @synthesize JSSignConfiguration=_JSSignConfiguration;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies; // @synthesize additionalHTTPCookies=_additionalHTTPCookies;
@property (copy, nonatomic) NSArray *additionalQueryItems; // @synthesize additionalQueryItems=_additionalQueryItems;
@property (nonatomic) long long anisetteVersion; // @synthesize anisetteVersion=_anisetteVersion;
@property (copy, nonatomic) NSString *machineDataSyncState; // @synthesize machineDataSyncState=_machineDataSyncState;
@property (nonatomic) BOOL shouldParseBodyData; // @synthesize shouldParseBodyData=_shouldParseBodyData;
@property (nonatomic) BOOL shouldRequireURLBag; // @synthesize shouldRequireURLBag=_shouldRequireURLBag;
@property (nonatomic) BOOL shouldUseMescalSigning; // @synthesize shouldUseMescalSigning=_shouldUseMescalSigning;
@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;
+ (Class)_responseHandlerClass;
+ (BOOL)_shouldPersonalizeRequestForClientInfo:(id)arg1 personalizationStyle:(long long)arg2;
+ (id)currentConnectionTypeHeader;
- (void).cxx_destruct;
- (void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_shouldPersonalizeRequest;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;

@end
