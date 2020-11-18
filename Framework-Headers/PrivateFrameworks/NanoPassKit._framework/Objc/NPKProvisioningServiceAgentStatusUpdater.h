//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSProtobuf, IDSService, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKProvisioningServiceAgentStatusUpdater : NSObject
{
    IDSService *_service;
    IDSProtobuf *_pendingStatusProtobuf;
    long long _messagePriority;
    NSString *_responseIdentifier;
    NSObject<OS_dispatch_source> *_statusTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_sendOptions;
    unsigned long long _updatesSent;
    unsigned long long _maxUpdates;
}

@property (nonatomic) unsigned long long maxUpdates; // @synthesize maxUpdates=_maxUpdates;
@property (nonatomic) long long messagePriority; // @synthesize messagePriority=_messagePriority;
@property (strong, nonatomic) IDSProtobuf *pendingStatusProtobuf; // @synthesize pendingStatusProtobuf=_pendingStatusProtobuf;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy, nonatomic) NSString *responseIdentifier; // @synthesize responseIdentifier=_responseIdentifier;
@property (strong, nonatomic) NSDictionary *sendOptions; // @synthesize sendOptions=_sendOptions;
@property (strong, nonatomic) IDSService *service; // @synthesize service=_service;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *statusTimer; // @synthesize statusTimer=_statusTimer;
@property (nonatomic) unsigned long long updatesSent; // @synthesize updatesSent=_updatesSent;

- (void).cxx_destruct;
- (void)_sendStatusUpdate;
- (void)dealloc;
- (id)initWithPendingStatusProtobuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 maxUpdates:(unsigned long long)arg4 responseIdentifier:(id)arg5 sendOptions:(id)arg6 queue:(id)arg7;
- (id)initWithPendingStatusProtobuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 maxUpdates:(unsigned long long)arg4 responseIdentifier:(id)arg5 sendOptions:(id)arg6 queue:(id)arg7 updateInterval:(double)arg8;
- (void)invalidate;

@end

