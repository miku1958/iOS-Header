//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation
{
    NSDictionary *_responseDictionary;
    BOOL _didHandleInvalidConfig;
    WLKURLRequestProperties *_requestProperties;
    unsigned long long _environmentHash;
}

@property BOOL didHandleInvalidConfig; // @synthesize didHandleInvalidConfig=_didHandleInvalidConfig;
@property (nonatomic) unsigned long long environmentHash; // @synthesize environmentHash=_environmentHash;
@property (strong, nonatomic) WLKURLRequestProperties *requestProperties; // @synthesize requestProperties=_requestProperties;

- (void).cxx_destruct;
- (void)handleResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithRequestProperties:(id)arg1;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (void)processResponse;
- (id)responseDictionary;
- (id)shortDescription;

@end

