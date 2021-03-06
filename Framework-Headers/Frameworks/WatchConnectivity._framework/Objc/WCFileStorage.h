//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCContentIndex;
@protocol OS_dispatch_queue;

@interface WCFileStorage : NSObject
{
    NSString *_pairingID;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSArray *_outstandingFileTransfers;
    WCContentIndex *_fileIndex;
    WCContentIndex *_fileResultsIndex;
    WCContentIndex *_userInfoIndex;
    WCContentIndex *_userInfoResultsIndex;
}

@property (strong) WCContentIndex *fileIndex; // @synthesize fileIndex=_fileIndex;
@property (strong) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property (strong) WCContentIndex *fileResultsIndex; // @synthesize fileResultsIndex=_fileResultsIndex;
@property (strong) NSArray *outstandingFileTransfers; // @synthesize outstandingFileTransfers=_outstandingFileTransfers;
@property (copy, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property (strong) WCContentIndex *userInfoIndex; // @synthesize userInfoIndex=_userInfoIndex;
@property (strong) WCContentIndex *userInfoResultsIndex; // @synthesize userInfoResultsIndex=_userInfoResultsIndex;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)appContextFolderURL:(BOOL)arg1;
- (id)appendPathForFileTransfer:(id)arg1 toPath:(id)arg2;
- (void)cleanUpOldPairingIDFolderInFolder:(id)arg1 pairedDevicesPairingIDs:(id)arg2;
- (void)cleanUpOldPairingIDFoldersWithPairedDevicesPairingIDs:(id)arg1;
- (void)cleanUpWatchContentDirectoryWithCurrentAppInstallationID:(id)arg1;
- (void)cleanupSessionFileFromInbox:(id)arg1;
- (void)createWatchDirectoryIfNeeded:(id)arg1;
- (void)deleteAppContextDataFromInbox;
- (void)deleteAppContextReceived:(BOOL)arg1;
- (void)deleteFileFolderForSessionFileFromInbox:(id)arg1;
- (void)deleteOutstandingFileTransfer:(id)arg1;
- (void)deleteOutstandingUserInfoTransfer:(id)arg1;
- (void)deleteRelatedMetadataForSessionFileFromInbox:(id)arg1;
- (void)deleteUserInfoTransferFromInbox:(id)arg1;
- (void)enumerateFileTransferResultsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIncomingFilesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIncomingUserInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUserInfoResultsWithBlock:(CDUnknownBlockType)arg1;
- (id)homeDirectoryURL;
- (id)init;
- (id)loadAppContextDataFromInbox;
- (id)loadAppContextReceived:(BOOL)arg1;
- (id)loadOutstandingFileTransfers;
- (id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(id *)arg1;
- (id)localAppContextFolderURL;
- (id)outgoingFileTransferPath;
- (void)persistAppContextData:(id)arg1 received:(BOOL)arg2;
- (void)persistOutgoingFileTransfer:(id)arg1;
- (id)persistOutgoingUserInfoTransfer:(id)arg1;
- (id)receivedAppContextFolderURL;
- (BOOL)removeItemAtURL:(id)arg1 numberOfRetries:(unsigned long long)arg2 error:(id *)arg3;
- (void)resetIndexes;

@end

