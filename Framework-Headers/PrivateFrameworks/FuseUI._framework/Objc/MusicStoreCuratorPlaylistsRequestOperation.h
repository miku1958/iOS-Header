//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MusicStoreCuratorPlaylistsRequestOperation : MPStoreModelRequestOperation
{
    unsigned long long _requestType;
}

- (void)_produceIncrementalResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceInitialResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
