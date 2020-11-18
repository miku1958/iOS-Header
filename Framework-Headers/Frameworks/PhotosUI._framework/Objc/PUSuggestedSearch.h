//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUSearchResult-Protocol.h>

@class NSArray, NSMutableArray, NSString, PSIQuery, PUSiriSearch;
@protocol OS_dispatch_queue, PUSuggestedSearchDelegate;

__attribute__((visibility("hidden")))
@interface PUSuggestedSearch : NSObject <PUSearchResult>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_uuids;
    NSMutableArray *_uncommittedUUIDs;
    NSArray *_additionalUUIDs;
    NSMutableArray *_uncommittedAdditionalUUIDs;
    NSString *_displaySubtitle;
    BOOL _hasPendingChanges;
    PSIQuery *_query;
    unsigned long long _taskId;
    NSString *_displayTitle;
    NSString *_albumUUID;
    NSString *_memoryUUID;
    PUSiriSearch *_siriSearch;
    NSString *_searchString;
    unsigned long long _searchCategories;
    id<PUSuggestedSearchDelegate> _delegate;
    unsigned long long __approximateCount;
}

@property (setter=_setApproximateCount:) unsigned long long _approximateCount; // @synthesize _approximateCount=__approximateCount;
@property (readonly) NSArray *additionalUUIDs;
@property (strong, setter=_setAlbumUUID:) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSuggestedSearchDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, setter=_setDisplaySubtitle:) NSString *displaySubtitle; // @synthesize displaySubtitle=_displaySubtitle;
@property (copy, setter=_setDisplayTitle:) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isEmpty;
@property (strong, setter=_setMemoryUUID:) NSString *memoryUUID; // @synthesize memoryUUID=_memoryUUID;
@property unsigned long long searchCategories; // @synthesize searchCategories=_searchCategories;
@property (copy, setter=_setSearchString:) NSString *searchString; // @synthesize searchString=_searchString;
@property (strong, setter=_setSiriSearch:) PUSiriSearch *siriSearch; // @synthesize siriSearch=_siriSearch;
@property (readonly) Class superclass;
@property (readonly) NSArray *uuids;

- (void).cxx_destruct;
- (void)_inqAddAssetUUIDsFromFetchRequest:(id)arg1;
- (void)_inqAddAssetUUIDsFromFetchRequest:(id)arg1 synchronous:(BOOL)arg2;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (void)_inqMergePendingChanges;
- (void)_inqRestart;
- (unsigned long long)_inqTaskId;
- (BOOL)_isTargetGroupResult:(id)arg1;
- (void)_mergePendingChanges;
- (void)cancel;
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1;
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (BOOL)hasPendingChanges;
- (id)init;
- (id)initWithDisplayTitle:(id)arg1;
- (id)initWithDisplayTitle:(id)arg1 displaySubtitle:(id)arg2 uuids:(id)arg3;
- (void)restart;

@end

