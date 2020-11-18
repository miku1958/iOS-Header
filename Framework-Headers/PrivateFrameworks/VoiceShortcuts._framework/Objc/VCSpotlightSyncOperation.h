//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, NSDictionary, NSSet, VCSpotlightState;
@protocol OS_dispatch_queue, OS_os_transaction, VCSpotlightSyncOperationDelegate;

@interface VCSpotlightSyncOperation : NSObject
{
    BOOL _fullResync;
    id<VCSpotlightSyncOperationDelegate> _delegate;
    NSDictionary *_searchableItemRegistry;
    NSSet *_identifiersToRemove;
    NSDictionary *_keyedReferences;
    VCSpotlightState *_localState;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchableIndex *_index;
    NSObject<OS_os_transaction> *_transaction;
}

@property (weak, nonatomic) id<VCSpotlightSyncOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL fullResync; // @synthesize fullResync=_fullResync;
@property (readonly, nonatomic) NSSet *identifiersToRemove; // @synthesize identifiersToRemove=_identifiersToRemove;
@property (readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property (readonly, nonatomic) NSDictionary *keyedReferences; // @synthesize keyedReferences=_keyedReferences;
@property (readonly, nonatomic) VCSpotlightState *localState; // @synthesize localState=_localState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSDictionary *searchableItemRegistry; // @synthesize searchableItemRegistry=_searchableItemRegistry;
@property (strong, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;

+ (void)_fillIdentifiersToRemove:(id *)arg1 searchableItemRegistry:(id *)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5;
- (void).cxx_destruct;
- (void)cleanupAndExitWithRequestToRelaunch:(BOOL)arg1;
- (void)clearLocalStateAndExit;
- (void)deleteSpotlightFileAndCleanup;
- (void)indexSearchableItems;
- (id)init;
- (id)initWithModifiedReferences:(id)arg1 inserted:(id)arg2 removed:(id)arg3 spotlightIndex:(id)arg4 localState:(id)arg5;
- (id)initWithReferences:(id)arg1 forceFullResync:(BOOL)arg2 spotlightIndex:(id)arg3 localState:(id)arg4;
- (void)saveLocalState;
- (void)start;

@end
