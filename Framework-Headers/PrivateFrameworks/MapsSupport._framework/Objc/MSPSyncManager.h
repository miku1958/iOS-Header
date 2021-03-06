//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/SYServiceDelegate-Protocol.h>
#import <MapsSupport/SYSessionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, SYService;
@protocol OS_dispatch_queue;

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate>
{
    SYService *_service;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_bookmarks;
    NSMutableDictionary *_bookmarksMap;
    NSMutableArray *_bookmarksForDisplay;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    NSMutableArray *_history;
    NSMutableDictionary *_historyMap;
    BOOL _resetSyncRequested;
    NSMutableArray *_pendingSyncItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_bookmarkIsDisplayable:(id)arg1;
- (void).cxx_destruct;
- (void)_addBookmark:(id)arg1;
- (void)_addHistoryItem:(id)arg1;
- (void)_addPin:(id)arg1;
- (void)_applyAddItem:(id)arg1;
- (void)_applyDeleteItem:(id)arg1;
- (void)_applyUpdateItem:(id)arg1;
- (void)_clearAllNanoPersistableData;
- (void)_findDisplayableBookmarks;
- (void)_notifyObservers;
- (void)_removeBookmark:(id)arg1;
- (void)_removeHistoryItem:(id)arg1;
- (void)_removePin:(id)arg1;
- (void)_resumeSyncService;
- (void)_setHasChangesAvailable;
- (void)_updateBookmark:(id)arg1;
- (void)_updateFromDisk;
- (void)_updateHistoryItem:(id)arg1;
- (void)_updatePin:(id)arg1;
- (id)_wrapBookmark:(id)arg1 changeType:(long long)arg2;
- (id)_wrapHistoryItem:(id)arg1 changeType:(long long)arg2;
- (id)_wrapPin:(id)arg1 changeType:(long long)arg2;
- (id)bookmarks;
- (void)completedPreparingSync;
- (void)completedSync;
- (id)displayableBookmarks;
- (id)history;
- (id)init;
- (void)notifyObservers;
- (id)pins;
- (id)readBookmarks;
- (id)readHistory;
- (id)readPins;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (BOOL)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)setDroppedPin:(id)arg1;
- (void)setNeedsFullSync;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (void)updateHistoryItem:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;

@end

