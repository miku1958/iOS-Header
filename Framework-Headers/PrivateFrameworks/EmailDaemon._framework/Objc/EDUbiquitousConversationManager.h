//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDConversationRemoteStorageDelegate-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol EDConversationRemoteStorage, EDUbiquitousConversationManagerDelegate, OS_dispatch_queue;

@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable>
{
    BOOL _initialized;
    id<EDUbiquitousConversationManagerDelegate> _delegate;
    id<EDConversationRemoteStorage> _cloudStorage;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_conversationIDsBySyncKey;
    NSMutableSet *_unmatchedKeys;
}

@property (strong, nonatomic) id<EDConversationRemoteStorage> cloudStorage; // @synthesize cloudStorage=_cloudStorage;
@property (strong, nonatomic) NSMutableDictionary *conversationIDsBySyncKey; // @synthesize conversationIDsBySyncKey=_conversationIDsBySyncKey;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EDUbiquitousConversationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableSet *unmatchedKeys; // @synthesize unmatchedKeys=_unmatchedKeys;

+ (id)log;
- (void).cxx_destruct;
- (void)_mergeServerChanges:(id)arg1;
- (void)_setCloudStorageValue:(id)arg1 forKey:(id)arg2;
- (id)_syncKeyForConversationID:(long long)arg1;
- (BOOL)_synchronize;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (BOOL)hasSubscribedConversations;
- (id)initWithDelegate:(id)arg1;
- (void)performDailyExportForChangedConversations:(id)arg1;
- (void)performInitialSync;
- (void)pruneDatabasePurgingOldestEntries:(BOOL)arg1;
- (void)setFlags:(unsigned long long)arg1 forConversations:(id)arg2;
- (id)syncKeyForUpdatedConversation:(long long)arg1 flags:(unsigned long long)arg2;

@end
