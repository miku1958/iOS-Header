//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDAutoReplying-Protocol.h>

@class CARAutomaticDNDStatus, NSMutableDictionary, NSString;
@protocol IMDAutoReplyDelegate, OS_dispatch_queue;

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying>
{
    id<IMDAutoReplyDelegate> _replyDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    CARAutomaticDNDStatus *_automaticDNDStatus;
    NSMutableDictionary *_propertiesForChatIdentifiers;
}

@property (strong, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus; // @synthesize automaticDNDStatus=_automaticDNDStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *propertiesForChatIdentifiers; // @synthesize propertiesForChatIdentifiers=_propertiesForChatIdentifiers;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (weak, nonatomic) id<IMDAutoReplyDelegate> replyDelegate;
@property (readonly) Class superclass;

- (BOOL)_audience:(unsigned long long)arg1 allowsRepliesToChat:(id)arg2;
- (unsigned long long)_autoReplyAudiencePreference;
- (BOOL)_contactsContainsParticipants:(id)arg1;
- (id)_customizedAutoReplyMessage;
- (BOOL)_favoritesContainsParticipants:(id)arg1;
- (void)_handleGeneratedAutoReplyText:(id)arg1 forChat:(id)arg2;
- (void)_handleReceivedUrgentRequestForMessages:(id)arg1;
- (BOOL)_hasRecentOutgoingMessagesInChat:(id)arg1;
- (BOOL)_isActive;
- (id)_propertiesForChat:(id)arg1;
- (void)_updateDNDStatus;
- (BOOL)_urgentTriggerMatchInText:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)processMessages:(id)arg1 inChat:(id)arg2;

@end

