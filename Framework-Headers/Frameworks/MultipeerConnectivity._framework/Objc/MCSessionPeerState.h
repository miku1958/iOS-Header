//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPeerID, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MCSessionPeerState : NSObject
{
    BOOL _connectPeerCalled;
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
    MCPeerID *_peerID;
    long long _state;
    NSMutableDictionary *_outgoingStreamRequests;
    NSMutableDictionary *_incomingStreams;
    NSMutableDictionary *_outgoingStreams;
    NSData *_nearbyConnectionData;
    long long _certificateDecision;
}

@property (nonatomic) long long certificateDecision; // @synthesize certificateDecision=_certificateDecision;
@property (nonatomic) BOOL connectPeerCalled; // @synthesize connectPeerCalled=_connectPeerCalled;
@property (strong, nonatomic) NSMutableDictionary *incomingStreams; // @synthesize incomingStreams=_incomingStreams;
@property (copy, nonatomic) NSData *nearbyConnectionData; // @synthesize nearbyConnectionData=_nearbyConnectionData;
@property (readonly, nonatomic) unsigned int newStreamID; // @synthesize newStreamID=_newStreamID;
@property (readonly, nonatomic) unsigned int newStreamOpenRequestID; // @synthesize newStreamOpenRequestID=_newStreamOpenRequestID;
@property (strong, nonatomic) NSMutableDictionary *outgoingStreamRequests; // @synthesize outgoingStreamRequests=_outgoingStreamRequests;
@property (strong, nonatomic) NSMutableDictionary *outgoingStreams; // @synthesize outgoingStreams=_outgoingStreams;
@property (readonly, copy, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property (nonatomic) long long state; // @synthesize state=_state;

- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)arg1;

@end

