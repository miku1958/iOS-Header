//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/NSCopying-Protocol.h>

@class CBManager, NSUUID;

@interface CBPeer : NSObject <NSCopying>
{
    BOOL _isLinkEncrypted;
    unsigned char _connectedTransport;
    NSUUID *_identifier;
    unsigned long long _mtuLength;
    long long _pairingState;
    long long _hostState;
    long long _role;
    CBManager *_manager;
}

@property (nonatomic) unsigned char connectedTransport; // @synthesize connectedTransport=_connectedTransport;
@property (nonatomic) long long hostState; // @synthesize hostState=_hostState;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isLinkEncrypted; // @synthesize isLinkEncrypted=_isLinkEncrypted;
@property (weak, nonatomic) CBManager *manager; // @synthesize manager=_manager;
@property (nonatomic) unsigned long long mtuLength; // @synthesize mtuLength=_mtuLength;
@property (nonatomic) long long pairingState; // @synthesize pairingState=_pairingState;
@property (nonatomic) long long role; // @synthesize role=_role;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleLinkEncryptionChanged:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (BOOL)hasTag:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInfo:(id)arg1 manager:(id)arg2;
- (id)peerStateToString:(long long)arg1;
- (void)sendInternalMsg:(int)arg1 args:(id)arg2;
- (id)sendInternalSyncMsg:(int)arg1 args:(id)arg2;
- (void)tag:(id)arg1;
- (void)untag:(id)arg1;

@end

