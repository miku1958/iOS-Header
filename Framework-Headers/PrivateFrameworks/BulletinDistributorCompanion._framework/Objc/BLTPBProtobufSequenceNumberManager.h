//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLTCircularBitBuffer, NSLock, NSString, NSURL, NSUUID;

@interface BLTPBProtobufSequenceNumberManager : NSObject
{
    unsigned long long _sendSequenceNumber;
    unsigned long long _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    NSURL *_sequenceNumbersURL;
    BOOL _updateSequenceNumbersOnOutOfOrder;
    unsigned long long _sessionState;
    NSString *_serviceName;
    NSUUID *_currentSessionIdentifier;
    NSUUID *_recvSessionIdentifier;
}

@property (readonly, nonatomic) NSUUID *currentSessionIdentifier; // @synthesize currentSessionIdentifier=_currentSessionIdentifier;
@property (readonly, nonatomic) NSUUID *recvSessionIdentifier; // @synthesize recvSessionIdentifier=_recvSessionIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;

- (void).cxx_destruct;
- (BOOL)_isSequenceNumberInOrder:(unsigned long long)arg1;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1;
- (id)_sequenceNumbersURL;
- (BOOL)_writeSequenceNumbersToStore;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(BOOL)arg2;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(BOOL)arg2 duplicateCapacity:(unsigned long long)arg3;
- (id)nextSendSequenceNumber;
- (long long)setRecvSequenceNumber:(unsigned long long)arg1 recvSessionIdentifier:(id)arg2 force:(BOOL)arg3;

@end
