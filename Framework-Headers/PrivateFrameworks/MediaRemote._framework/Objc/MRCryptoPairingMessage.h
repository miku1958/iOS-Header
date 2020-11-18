//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) NSData *pairingData;
@property (readonly, nonatomic, getter=isRetrying) BOOL retrying;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;

- (unsigned long long)encryptionType;
- (id)initWithPairingData:(id)arg1 status:(int)arg2;
- (id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(unsigned long long)arg5;
- (unsigned long long)type;

@end
