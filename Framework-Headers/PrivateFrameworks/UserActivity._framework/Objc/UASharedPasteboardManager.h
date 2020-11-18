//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/UASharedPasteboardManagerResponseProtocol-Protocol.h>

@class NSDictionary, NSSet, NSString, NSXPCConnection, UAPasteboardGeneration;
@protocol OS_dispatch_queue;

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol>
{
    BOOL _remotePasteboardAvaliable;
    BOOL _currentGenerationHasUpdates;
    BOOL _updateScheduled;
    int _disableCount;
    CDUnknownBlockType _localPasteboardWasFetched;
    UAPasteboardGeneration *_currentGeneration;
    NSObject<OS_dispatch_queue> *_serverQ;
    NSXPCConnection *_connection;
    NSXPCConnection *_controllConnection;
    id _controllSyncObject;
    NSObject<OS_dispatch_queue> *_pasteboardReadQ;
    NSSet *_disallowdTypes;
    NSSet *_bomCheckTypes;
    NSDictionary *_typeBOMs;
    NSDictionary *_typeAliases;
    CDUnknownBlockType _completionBlock;
}

@property (strong) NSSet *bomCheckTypes; // @synthesize bomCheckTypes=_bomCheckTypes;
@property CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong) NSXPCConnection *controllConnection; // @synthesize controllConnection=_controllConnection;
@property (strong) id controllSyncObject; // @synthesize controllSyncObject=_controllSyncObject;
@property (strong) UAPasteboardGeneration *currentGeneration; // @synthesize currentGeneration=_currentGeneration;
@property BOOL currentGenerationHasUpdates; // @synthesize currentGenerationHasUpdates=_currentGenerationHasUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int disableCount; // @synthesize disableCount=_disableCount;
@property (strong) NSSet *disallowdTypes; // @synthesize disallowdTypes=_disallowdTypes;
@property (readonly) unsigned long long hash;
@property (copy) CDUnknownBlockType localPasteboardWasFetched; // @synthesize localPasteboardWasFetched=_localPasteboardWasFetched;
@property (strong) NSObject<OS_dispatch_queue> *pasteboardReadQ; // @synthesize pasteboardReadQ=_pasteboardReadQ;
@property BOOL remotePasteboardAvaliable; // @synthesize remotePasteboardAvaliable=_remotePasteboardAvaliable;
@property (strong) NSObject<OS_dispatch_queue> *serverQ; // @synthesize serverQ=_serverQ;
@property (readonly) Class superclass;
@property (strong) NSDictionary *typeAliases; // @synthesize typeAliases=_typeAliases;
@property (strong) NSDictionary *typeBOMs; // @synthesize typeBOMs=_typeBOMs;
@property BOOL updateScheduled; // @synthesize updateScheduled=_updateScheduled;

+ (BOOL)dontConnectToServer;
+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
- (BOOL)addData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
- (void)clearLocalPasteboardInformation;
- (void)dealloc;
- (void)doClearLocalPasteboardInfo;
- (void)fetchPasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchPasteboardStatus:(CDUnknownBlockType)arg1;
- (void)fetchPasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)isRemotePasteboardAvaliable;
- (void)pickupLocalChanges:(id)arg1 iterNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)requestPasteboardFetchReturnEarly;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendUpdateToServer;
- (id)serializeItem:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (id)serializeType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (void)startPreventingPasteboardSharing;
- (void)stopPreventingPasteboardSharing;
- (void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2;
- (void)writeLocalPasteboardToFile:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

