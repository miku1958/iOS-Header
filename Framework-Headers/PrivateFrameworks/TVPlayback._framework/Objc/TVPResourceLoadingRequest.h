//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest, NSDictionary, NSNumber, NSURL;

@interface TVPResourceLoadingRequest : NSObject
{
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSNumber *avRequestID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;

- (void).cxx_destruct;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (id)init;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;

@end

