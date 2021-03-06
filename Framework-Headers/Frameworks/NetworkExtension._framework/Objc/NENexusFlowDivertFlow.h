//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NENexusFlow.h>

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow
{
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow *_flowDivertFlow;
}

@property (strong) NSUUID *clientID; // @synthesize clientID=_clientID;
@property struct _NEFlow *flowDivertFlow; // @synthesize flowDivertFlow=_flowDivertFlow;
@property (strong) NWEndpoint *internalEndpoint; // @synthesize internalEndpoint=_internalEndpoint;
@property (strong) NWParameters *internalParameters; // @synthesize internalParameters=_internalParameters;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)dealloc;
- (id)endpoint;
- (id)initWithFlowDivertFlow:(struct _NEFlow *)arg1;
- (id)parameters;

@end

