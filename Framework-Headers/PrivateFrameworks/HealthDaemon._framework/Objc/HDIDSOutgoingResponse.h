//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSIncomingRequest, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription>
{
    BOOL _doNotCompress;
    BOOL _forceLocalDelivery;
    BOOL _sent;
    unsigned short _messageID;
    HDIDSIncomingRequest *_request;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    id _pbResponse;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property (nonatomic) BOOL forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property (strong, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property (strong, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property (nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property (weak, nonatomic) HDIDSIncomingRequest *request; // @synthesize request=_request;
@property (nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property (getter=isSent) BOOL sent; // @synthesize sent=_sent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithActivationRestore:(id)arg1 forStore:(id)arg2;
- (void)configureWithStatus:(id)arg1 forStore:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)nanoSyncDescription;
- (void)send;

@end

