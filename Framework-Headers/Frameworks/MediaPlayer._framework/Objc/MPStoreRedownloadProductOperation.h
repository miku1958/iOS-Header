//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MPStoreRedownloadProductResponse, NSError, NSObject, NSString, SSURLConnectionRequest;
@protocol OS_dispatch_queue;

@interface MPStoreRedownloadProductOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPStoreRedownloadProductResponse *_redownloadProductResponse;
    NSError *_responseError;
    BOOL _shouldUseStreamingRedownload;
    SSURLConnectionRequest *_URLConnectionRequest;
    NSString *_buyParameters;
    unsigned long long _endpointType;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}

@property (readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property (readonly, nonatomic) unsigned long long endpointType; // @synthesize endpointType=_endpointType;
@property (readonly, nonatomic) MPStoreRedownloadProductResponse *redownloadProductResponse;
@property (copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property (readonly, copy, nonatomic) NSError *responseError;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(BOOL)arg3;
- (void)main;

@end

