//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreBluetooth/NSCopying-Protocol.h>

@class NSUUID;

@interface CBPeer : NSObject <NSCopying>
{
    BOOL _isLinkEncrypted;
    NSUUID *_identifier;
    unsigned long long _mtuLength;
    long long _pairingState;
    long long _hostState;
}

@property (nonatomic) long long hostState; // @synthesize hostState=_hostState;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isLinkEncrypted; // @synthesize isLinkEncrypted=_isLinkEncrypted;
@property (nonatomic) unsigned long long mtuLength; // @synthesize mtuLength=_mtuLength;
@property (nonatomic) long long pairingState; // @synthesize pairingState=_pairingState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleLinkEncryptionChanged:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (id)initWithInfo:(id)arg1;

@end

