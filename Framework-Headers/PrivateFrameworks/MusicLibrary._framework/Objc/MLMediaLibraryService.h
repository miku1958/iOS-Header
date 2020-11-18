//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryServiceClientProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol MLMediaLibraryServiceProtocol, OS_dispatch_queue;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_serviceConnection;
    id<MLMediaLibraryServiceProtocol> _serviceProxy;
    NSMutableDictionary *_progressBlocksByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_setDaemonProcessInfo:(id)arg1;
+ (id)sharedMediaLibraryService;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)getDeviceSharedLibraryPath:(CDUnknownBlockType)arg1;
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;
- (id)init;
- (void)lockDatabaseForReason:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)pollCurrentImportStatus:(CDUnknownBlockType)arg1;
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (void)setDeviceSharedLibraryPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

