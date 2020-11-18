//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSObject, SSURLConnectionRequest;
@protocol OS_dispatch_queue;

@interface RadioGetFeaturedStationsRequest : RadioRequest
{
    NSObject<OS_dispatch_queue> *_artworkQueue;
    SSURLConnectionRequest *_request;
    unsigned int _stationCount;
    BOOL _disableArtworkLoading;
    BOOL _disableCachedResponses;
}

@property (nonatomic) BOOL disableArtworkLoading; // @synthesize disableArtworkLoading=_disableArtworkLoading;
@property (nonatomic) BOOL disableCachedResponses; // @synthesize disableCachedResponses=_disableCachedResponses;

- (void).cxx_destruct;
- (id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(BOOL)arg3;
- (id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id *)arg2;
- (void)cancel;
- (id)init;
- (id)initWithStationCount:(unsigned int)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithFeaturedStationsCompletionHandler:(CDUnknownBlockType)arg1;

@end
