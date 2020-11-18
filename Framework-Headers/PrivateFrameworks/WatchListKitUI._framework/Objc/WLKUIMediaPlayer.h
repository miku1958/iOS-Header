//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUIMediaPlayerLibraryExport-Protocol.h>
#import <WatchListKitUI/WLKUIOrderedItemsMapDelegate-Protocol.h>

@class MPUQueryDataSource, NSObject, NSOperationQueue, NSString, WLKUIOrderedItemsMap;
@protocol OS_dispatch_queue;

@interface WLKUIMediaPlayer : IKJSObject <WLKUIOrderedItemsMapDelegate, WLKUIMediaPlayerLibraryExport>
{
    NSOperationQueue *_artworkLoadingQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    MPUQueryDataSource *_queryDataSource;
    WLKUIOrderedItemsMap *_orderedItemsMap;
    NSOperationQueue *_fetchOperationQueue;
    NSOperationQueue *_fetchCompletionOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSOperationQueue *fetchCompletionOperationQueue; // @synthesize fetchCompletionOperationQueue=_fetchCompletionOperationQueue;
@property (strong, nonatomic) NSOperationQueue *fetchOperationQueue; // @synthesize fetchOperationQueue=_fetchOperationQueue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WLKUIOrderedItemsMap *orderedItemsMap; // @synthesize orderedItemsMap=_orderedItemsMap;
@property (strong, nonatomic) MPUQueryDataSource *queryDataSource; // @synthesize queryDataSource=_queryDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dataSourceChanged:(id)arg1;
- (void)_dataSourceDidChange;
- (id)_dataSourceForConfigurationOptions:(id)arg1;
- (long long)_dataSourceType;
- (void)_dataSourceWillChange;
- (id)_dateFromConfigurationObject:(id)arg1;
- (id)_getItem:(id)arg1 includeChildren:(BOOL)arg2 additionalProperties:(id)arg3;
- (id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2;
- (id)_logObject;
- (id)_mediaItemForIdentifier:(id)arg1;
- (void)_mediaLibraryChanged:(id)arg1;
- (id)_numberForString:(id)arg1;
- (void)_onIsUpdateInProgressChangedNotification:(id)arg1;
- (void)_onSyncGenerationChangedNotification:(id)arg1;
- (id)_stringForNumber:(id)arg1;
- (void)dealloc;
- (void)fetchMediaEntitiesWithOptions:(id)arg1:(id)arg2;
- (id)findItemByPersistentIdentifier:(id)arg1:(id)arg2;
- (id)findItemByStoreIdentifier:(id)arg1:(id)arg2;
- (void)getImageForItem:(id)arg1:(id)arg2:(id)arg3;
- (BOOL)getIsInitialImport;
- (BOOL)getIsUpdateInProgress;
- (id)getItem:(id)arg1:(id)arg2;
- (unsigned long long)getItemCount;
- (id)getItemWithChildren:(id)arg1:(id)arg2;
- (id)getItems;
- (id)getShowIdentifierForStoreIdentifier:(id)arg1;
- (void)getUpdateProgress:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (BOOL)isHDRCapable;
- (void)itemsMapAddedKeys:(id)arg1 andRemovedKeys:(id)arg2;
- (BOOL)libraryHasMedia;
- (long long)queryHasItemCount:(id)arg1;
- (BOOL)setFilter:(id)arg1;
- (void)setFilterAsync:(id)arg1:(id)arg2;

@end
