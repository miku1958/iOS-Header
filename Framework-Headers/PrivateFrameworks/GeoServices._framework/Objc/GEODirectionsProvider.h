//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEODirectionsProvider : NSObject
{
    BOOL _isLoading;
    int _requestType;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _errorHandler;
}

@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property (nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;

- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (void)providerDidCancel;
- (void)providerReceivedError:(id)arg1 directionsError:(id)arg2;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 directionsError:(id)arg3;
- (void)providerReceivedResponse:(id)arg1;
- (void)requestCompleted;
- (void)startProviderWithRequest:(id)arg1;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end

