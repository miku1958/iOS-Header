//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaEntitiesDataSource.h>

#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSString, VUIMediaEntitiesFetchController, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate>
{
    VUIMediaLibrary *_mediaLibrary;
    VUIMediaEntitiesFetchController *_fetchController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) VUIMediaEntitiesFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getPurchaseHistoryIdsFromMediaEntities:(id)arg1;
- (void)_loadImageUrlsByPurchaseHistoryIds:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2;
- (void)startFetch;

@end

