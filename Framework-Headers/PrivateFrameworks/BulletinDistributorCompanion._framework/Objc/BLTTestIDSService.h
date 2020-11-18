//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTAbstractIDSService-Protocol.h>

@class BLTPBProtobufSequenceNumberManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol BLTAbstractIDSDevice;

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService>
{
    NSString *_service;
    NSMutableDictionary *_actionsByRequestType;
    NSMutableDictionary *_actionsByResponseType;
    NSMutableArray *_delegates;
    unsigned long long _currentIdentifier;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
    unsigned long long _minimumSendDelay;
    unsigned long long _maximumSendDelay;
    unsigned long long _minimumResponseDelay;
    unsigned long long _maximumResponseDelay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BLTAbstractIDSDevice> defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumResponseDelay; // @synthesize maximumResponseDelay=_maximumResponseDelay;
@property (nonatomic) unsigned long long maximumSendDelay; // @synthesize maximumSendDelay=_maximumSendDelay;
@property (nonatomic) unsigned long long minimumResponseDelay; // @synthesize minimumResponseDelay=_minimumResponseDelay;
@property (nonatomic) unsigned long long minimumSendDelay; // @synthesize minimumSendDelay=_minimumSendDelay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callDelegateActionForProtobuf:(id)arg1 delegate:(id)arg2 identifier:(id)arg3 type:(unsigned short)arg4 isResponse:(BOOL)arg5;
- (void)_handleProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3;
- (id)_lightsAndSirensRequestForProtobuf:(id)arg1;
- (unsigned long long)_nextSequenceNumber;
- (unsigned long long)_randomResponseDelay;
- (unsigned long long)_randomSendDelay;
- (unsigned long long)_randomValueBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (void)_sendBlockToAllDelegatesAfterTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_sendLightsAndSirensRequestForProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3;
- (void)_sendSetSectionInfoResponseWithIdentifier:(id)arg1 sendDelay:(unsigned long long)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithService:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end

