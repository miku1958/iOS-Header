//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary, NSIndexSet;

@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation
{
    NSIndexSet *_whitelistedFCKinds;
    NSDictionary *_storeBagDictionary;
}

- (void).cxx_destruct;
- (id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id *)arg3;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)roomURLWithRoomID:(id)arg1 storeBagDictionary:(id)arg2;

@end
