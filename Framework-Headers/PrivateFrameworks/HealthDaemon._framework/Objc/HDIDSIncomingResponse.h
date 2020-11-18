//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, IDSDevice, NSData, NSDate, NSDictionary, NSString;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription>
{
    unsigned short _messageID;
    IDSDevice *_fromDevice;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbResponse;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) IDSDevice *fromDevice; // @synthesize fromDevice=_fromDevice;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property (nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property (strong, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property (copy, nonatomic) NSString *requestIDSIdentifier; // @synthesize requestIDSIdentifier=_requestIDSIdentifier;
@property (strong, nonatomic) NSDictionary *requestPersistentUserInfo; // @synthesize requestPersistentUserInfo=_requestPersistentUserInfo;
@property (strong, nonatomic) NSDate *requestSent; // @synthesize requestSent=_requestSent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)nanoSyncDescription;

@end

