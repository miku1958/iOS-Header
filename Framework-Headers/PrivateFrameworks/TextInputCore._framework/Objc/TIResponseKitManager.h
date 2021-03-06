//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIResponseKitManaging-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_conversationTurns;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)rewriteMoneyAttributes:(id)arg1;
+ (id)sharedTIResponseKitManager;
+ (id)singletonInstance;
- (void).cxx_destruct;
- (void)addNewConversationTurnToHistory:(id)arg1;
- (id)cannedResponsesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(BOOL)arg7 isBlacklisted:(BOOL)arg8;
- (void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(BOOL)arg7 stringIsBlacklisted:(BOOL)arg8 async:(BOOL)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (id)init;
- (void)persistResponseKitDynamicDataToDisk;
- (void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(BOOL)arg8;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (id)responseKitResponseCandidatesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 shouldDisableAutoCaps:(BOOL)arg5;
- (void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;

@end

