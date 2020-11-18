//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPRemoteSession.h>

@class NSMutableDictionary;

@interface HMDWatchSession : HAPRemoteSession
{
    unsigned long long _sendInternalTimeout;
    NSMutableDictionary *_responseHandlers;
}

@property (strong, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property (nonatomic) unsigned long long sendInternalTimeout; // @synthesize sendInternalTimeout=_sendInternalTimeout;

- (void).cxx_destruct;
- (void)_clearOutRemainingRequests;
- (void)_peerTimedOut:(id)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)start;
- (void)stop;
- (void)transportReceivedMessage:(id)arg1;

@end

