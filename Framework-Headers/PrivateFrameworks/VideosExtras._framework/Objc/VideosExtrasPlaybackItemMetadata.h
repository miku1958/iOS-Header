//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@class NSString;

@interface VideosExtrasPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata
{
    NSString *_buyParameters;
    unsigned long long _mediaType;
    long long _storeAdamID;
}

- (void).cxx_destruct;
- (BOOL)_calculateAllowsCellularNetworking;
- (void)_videosPlaybackSettingsChanged:(id)arg1;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)buyParameters;
- (unsigned long long)contentType;
- (unsigned long long)hash;
- (id)initWithStoreAdamID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (long long)storeAdamID;

@end

