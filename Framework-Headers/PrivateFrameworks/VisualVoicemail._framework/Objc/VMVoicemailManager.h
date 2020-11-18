//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/VMClientXPCProtocol-Protocol.h>

@class NSArray, NSMutableSet, NSOrderedSet, NSProgress, NSString, VMClientWrapper, VMVoicemailCapabilities;
@protocol OS_dispatch_queue, VMServerXPCProtocol;

@interface VMVoicemailManager : NSObject <VMClientXPCProtocol>
{
    BOOL _messageWaiting;
    BOOL _online;
    BOOL _subscribed;
    BOOL _syncInProgress;
    BOOL _transcribing;
    BOOL _canChangePassword;
    BOOL _canChangeGreeting;
    BOOL _mailboxRequiresSetup;
    BOOL _transcriptionEnabled;
    struct os_unfair_lock_s _accessorLock;
    int _token;
    NSArray *_accounts;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned long long _storageUsage;
    NSProgress *_transcriptionProgress;
    NSOrderedSet *_voicemails;
    NSMutableSet *_trashedMessages;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    VMVoicemailCapabilities *_capabilities;
    VMClientWrapper *_client;
}

@property (readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property (copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property (readonly, nonatomic) NSArray *allVoicemails;
@property (readonly, nonatomic) BOOL canChangeGreeting; // @synthesize canChangeGreeting=_canChangeGreeting;
@property (readonly, nonatomic) BOOL canChangePassword; // @synthesize canChangePassword=_canChangePassword;
@property (strong, nonatomic) VMVoicemailCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) VMClientWrapper *client; // @synthesize client=_client;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL mailboxRequiresSetup; // @synthesize mailboxRequiresSetup=_mailboxRequiresSetup;
@property (nonatomic, getter=isMessageWaiting) BOOL messageWaiting; // @synthesize messageWaiting=_messageWaiting;
@property (nonatomic, getter=isOnline) BOOL online; // @synthesize online=_online;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property (readonly, nonatomic) id<VMServerXPCProtocol> serverConnection;
@property (nonatomic) unsigned long long storageUsage; // @synthesize storageUsage=_storageUsage;
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSyncInProgress) BOOL syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property (nonatomic) int token; // @synthesize token=_token;
@property (nonatomic, getter=isTranscribing) BOOL transcribing; // @synthesize transcribing=_transcribing;
@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled;
@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled; // @synthesize transcriptionEnabled=_transcriptionEnabled;
@property (readonly, nonatomic) NSProgress *transcriptionProgress; // @synthesize transcriptionProgress=_transcriptionProgress;
@property (strong, nonatomic) NSMutableSet *trashedMessages; // @synthesize trashedMessages=_trashedMessages;
@property (readonly, nonatomic) long long unreadCount;
@property (copy, nonatomic) NSOrderedSet *voicemails; // @synthesize voicemails=_voicemails;

- (void).cxx_destruct;
- (void)_requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg1;
- (id)asynchronousServerConnectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)changePassword:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)countOfVoicemailsPassingTest:(CDUnknownBlockType)arg1;
- (id)dataForVoicemailWithIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (id)deleteVoicemail:(id)arg1;
- (id)deleteVoicemails:(id)arg1;
- (void)greetingForAccountUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithClient:(id)arg1;
- (BOOL)isGreetingChangeSupportedForAccountUUID:(id)arg1;
- (BOOL)isPasscodeChangeSupportedForAccountUUID:(id)arg1;
- (id)markVoicemailAsRead:(id)arg1;
- (id)markVoicemailsAsRead:(id)arg1;
- (double)maximumGreetingDurationForAccountUUID:(id)arg1;
- (long long)maximumPasscodeLengthForAccountUUID:(id)arg1;
- (void)messageCountForMailboxType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)messageCountForMailboxType:(long long)arg1 error:(id *)arg2;
- (void)messageCountForMailboxType:(long long)arg1 read:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)messageCountForMailboxType:(long long)arg1 read:(BOOL)arg2 error:(id *)arg3;
- (id)messagesForMailboxType:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3 error:(id *)arg4;
- (id)messagesForMailboxType:(long long)arg1 read:(BOOL)arg2 limit:(long long)arg3 offset:(long long)arg4 error:(id *)arg5;
- (long long)minimumPasscodeLengthForAccountUUID:(id)arg1;
- (void)obliterate;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)removeVoicemailFromTrash:(id)arg1;
- (id)removeVoicemailsFromTrash:(id)arg1;
- (void)reportTranscriptionProblemForVoicemail:(id)arg1;
- (void)reportTranscriptionRatedAccurate:(BOOL)arg1 forVoicemail:(id)arg2;
- (void)requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg1;
- (void)retrieveDataForVoicemail:(id)arg1;
- (void)saveGreeting:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setGreeting:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPasscode:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)synchronize;
- (id)synchronousServerConnectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)trashVoicemail:(id)arg1;
- (id)trashVoicemails:(id)arg1;
- (id)uniqueIdentifierForVoiceMail:(id)arg1;
- (void)updateAccounts:(id)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (id)voicemailsPassingTest:(CDUnknownBlockType)arg1;
- (void)voicemailsUpdated:(id)arg1;

@end
