//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSString, RadioStation, SSURLConnectionRequest;

@interface RadioRecentStationsRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    RadioStation *_currentStation;
    NSString *_currentStationStringID;
    BOOL _shouldGroupResponses;
    unsigned long long _stationCount;
}

@property (nonatomic) BOOL shouldGroupResponses; // @synthesize shouldGroupResponses=_shouldGroupResponses;
@property (nonatomic) unsigned long long stationCount; // @synthesize stationCount=_stationCount;

- (void).cxx_destruct;
- (void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id *)arg2;
- (id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1;
- (id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id *)arg2;
- (void)cancel;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCurrentStation:(id)arg1;
- (id)initWithCurrentStationStringID:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

