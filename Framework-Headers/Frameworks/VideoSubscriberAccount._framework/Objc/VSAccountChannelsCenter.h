//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUndoManager, VSAccountStore;
@protocol OS_dispatch_queue;

@interface VSAccountChannelsCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_fileURL;
    VSAccountStore *_accountStore;
    NSString *_fileName;
    NSURL *_directoryURL;
    CDUnknownBlockType _identityProviderFetchOperationBlock;
}

@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property (copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property (copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (copy, nonatomic) CDUnknownBlockType identityProviderFetchOperationBlock; // @synthesize identityProviderFetchOperationBlock=_identityProviderFetchOperationBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (strong, nonatomic) NSUndoManager *undoManager;

+ (id)_accountChannelsWithProviderID:(id)arg1;
+ (id)_defaultDirectoryURL;
+ (id)_defaultFileName;
+ (void)_startOperationAndWaitForCompletion:(id)arg1;
+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)_enqueueRemoveSavedAccountChannelsAndWait;
- (void)_enqueueSaveAccountChannelsAndWait:(id)arg1;
- (id)_removeSavedAccountChannels;
- (void)_removeSavedAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_saveAccountChannels:(id)arg1;
- (void)_saveAccountChannels:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_savedAccountChannels;
- (id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2;
- (void)_snapshotPreviousChannels;
- (id)_storeIdentityProviderForAccount:(id)arg1;
- (void)fetchAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccountStore:(id)arg1;

@end
