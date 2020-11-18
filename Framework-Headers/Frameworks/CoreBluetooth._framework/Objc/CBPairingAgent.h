//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;

@interface CBPairingAgent : NSObject
{
    id<CBPairingAgentParentDelegate> _parentManager;
    BOOL _useOOBMode;
    id<CBPairingAgentDelegate> _delegate;
}

@property (nonatomic) id<CBPairingAgentDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL useOOBMode; // @synthesize useOOBMode=_useOOBMode;

- (void)handlePairingCompleted:(id)arg1;
- (void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingRequested:(id)arg1;
- (void)handleUnpaired:(id)arg1;
- (id)initWithParentManager:(id)arg1;
- (BOOL)isPeerCloudPaired:(id)arg1;
- (BOOL)isPeerPaired:(id)arg1;
- (void)pairPeer:(id)arg1;
- (void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(BOOL)arg3 data:(id)arg4;
- (id)retrieveOOBDataForPeer:(id)arg1;
- (id)retrievePairedPeers;
- (void)setOOBPairingEnabled:(BOOL)arg1 forPeer:(id)arg2;
- (void)setOrphan;
- (void)unpairPeer:(id)arg1;
- (void)updateRegistration;

@end
