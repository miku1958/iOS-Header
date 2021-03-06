//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteTextInput/RTIInputSystemSession.h>

#import <RemoteTextInput/RTIInputSystemPayloadDelegate-Protocol.h>

@class NSString, RTIDataPayload;
@protocol RTIInputSystemPayloadDelegate;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate>
{
    id<RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;
    id<RTIInputSystemPayloadDelegate> _payloadDelegate;
}

@property (readonly, copy, nonatomic) RTIDataPayload *currentForwardingDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<RTIInputSystemPayloadDelegate> forwardingPayloadDelegate; // @synthesize forwardingPayloadDelegate=_forwardingPayloadDelegate;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<RTIInputSystemPayloadDelegate> payloadDelegate; // @synthesize payloadDelegate=_payloadDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSessionDelegate:(id)arg1;
- (void)flushOperations;
- (void)handleForwardingResponseActionPayload:(id)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (void)setSessionDelegate:(id)arg1;

@end

