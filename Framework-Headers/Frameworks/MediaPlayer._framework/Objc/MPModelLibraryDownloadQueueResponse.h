//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

#import <MediaPlayer/MPStoreDownloadManagerObserver-Protocol.h>

@class NSString;

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse <MPStoreDownloadManagerObserver>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

@end

