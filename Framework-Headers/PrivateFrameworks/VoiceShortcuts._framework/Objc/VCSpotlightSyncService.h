//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSpotlightSyncOperationDelegate-Protocol.h>
#import <VoiceShortcuts/WFDatabaseObjectObserver-Protocol.h>

@class CSSearchableIndex, NSString, VCDaemonXPCEventHandler, VCSpotlightSyncOperation, WFDatabaseResult, WFDebouncer;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate>
{
    BOOL _isFetchingClientState;
    BOOL _hasAddedXPCEventHandlerObserver;
    WFDatabaseResult *_workflows;
    WFDebouncer *_debouncer;
    VCDaemonXPCEventHandler *_eventHandler;
    VCSpotlightSyncOperation *_syncOperation;
    id<VCDatabaseProvider> _databaseProvider;
    CSSearchableIndex *_index;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property (readonly, nonatomic) WFDebouncer *debouncer; // @synthesize debouncer=_debouncer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property (nonatomic) BOOL hasAddedXPCEventHandlerObserver; // @synthesize hasAddedXPCEventHandlerObserver=_hasAddedXPCEventHandlerObserver;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property (nonatomic) BOOL isFetchingClientState; // @synthesize isFetchingClientState=_isFetchingClientState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) VCSpotlightSyncOperation *syncOperation; // @synthesize syncOperation=_syncOperation;
@property (readonly, nonatomic) WFDatabaseResult *workflows; // @synthesize workflows=_workflows;

- (void).cxx_destruct;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)dealloc;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (void)requestSync;
- (void)start;
- (void)sync;
- (void)syncOperationFinishedWithRequestToRelaunch:(BOOL)arg1;
- (void)syncWithModifiedObjects:(id)arg1 inserted:(id)arg2 removed:(id)arg3;

@end

