//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, HDIDSParticipant, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription>
{
    BOOL _doNotCompress;
    BOOL _queueOnly1;
    BOOL _forceLocalDelivery;
    unsigned short _messageID;
    HDIDSParticipant *_toParticipant;
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    double _responseTimeout;
    NSDictionary *_persistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property (nonatomic) BOOL forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property (readonly, nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property (strong, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property (strong, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property (nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property (nonatomic) BOOL queueOnly1; // @synthesize queueOnly1=_queueOnly1;
@property (nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property (nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDIDSParticipant *toParticipant; // @synthesize toParticipant=_toParticipant;

+ (id)_requestWithMessageID:(unsigned short)arg1 message:(id)arg2 syncStore:(id)arg3;
+ (id)activationRequestWithRestore:(id)arg1 syncStore:(id)arg2;
+ (id)changeRequestWithChangeSet:(id)arg1 status:(id)arg2 syncStore:(id)arg3;
+ (id)requestWithMessageID:(unsigned short)arg1 participant:(id)arg2;
+ (id)speculativeChangeRequestWithChangeSet:(id)arg1 syncStore:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)nanoSyncDescription;

@end

