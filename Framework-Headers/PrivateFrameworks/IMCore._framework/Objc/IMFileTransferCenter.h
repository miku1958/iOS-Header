//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IMFileTransferCenter : NSObject
{
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableArray *_preauthorizedInfos;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableSet *_activeTransfers;
    NSMutableSet *_pendingTransfers;
}

@property (readonly, nonatomic) NSArray *activeTransferGUIDs;
@property (readonly, nonatomic) NSArray *activeTransfers;
@property (readonly, nonatomic) BOOL hasActiveFileTransfers;
@property (readonly, nonatomic) BOOL hasPendingFileTransfers;
@property (readonly, nonatomic) NSArray *orderedTransfers;
@property (readonly, nonatomic) NSArray *orderedTransfersGUIDs;
@property (readonly, nonatomic) NSDictionary *transfers;

+ (Class)fileTransferClass;
+ (void)setTransferCenterClass:(Class)arg1;
+ (id)sharedInstance;
+ (Class)transferCenterClass;
- (void)_addActiveTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)_clearTransfers;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleStandaloneFileTransferRegistered:(id)arg1;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_removeAllActiveTransfers;
- (void)_removePendingTransfer:(id)arg1;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4;
- (void)acknowledgeAllPendingTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (id)chatForTransfer:(id)arg1;
- (void)clearFinishedTransfers;
- (void)dealloc;
- (void)deleteTransfer:(id)arg1;
- (BOOL)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (BOOL)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (BOOL)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;
- (void)registerTransferWithDaemon:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)sendTransfer:(id)arg1;
- (void)setAuxImageForTransfer:(id)arg1 value:(BOOL)arg2;
- (void)setAuxVideoForTransfer:(id)arg1 value:(BOOL)arg2;
- (void)stopTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(BOOL)arg2;
- (id)transfersForAccount:(id)arg1;
- (BOOL)wasFileTransferPreauthorized:(id)arg1;

@end

