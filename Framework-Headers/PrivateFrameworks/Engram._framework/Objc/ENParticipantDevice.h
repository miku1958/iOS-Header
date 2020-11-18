//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class NSData;
@protocol ENCypher, ENDevicePublicKey;

@interface ENParticipantDevice : NSObject <NSSecureCoding>
{
    id<ENDevicePublicKey> _devicePublicKey;
    NSData *_identifier;
    id<ENCypher> _cypher;
}

@property (strong, nonatomic) id<ENCypher> cypher; // @synthesize cypher=_cypher;
@property (readonly, nonatomic) id<ENDevicePublicKey> devicePublicKey; // @synthesize devicePublicKey=_devicePublicKey;
@property (readonly, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3;
- (id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id *)arg3 error:(id *)arg4;
- (id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id *)arg4;

@end

