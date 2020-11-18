//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCarHeadUnit-Protocol.h>

@class NSString;

@interface _INPBCarHeadUnit : PBCodable <_INPBCarHeadUnit, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_bluetoothIdentifier;
    NSString *_iAP2Identifier;
}

@property (copy, nonatomic) NSString *bluetoothIdentifier; // @synthesize bluetoothIdentifier=_bluetoothIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBluetoothIdentifier;
@property (readonly, nonatomic) BOOL hasIAP2Identifier;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *iAP2Identifier; // @synthesize iAP2Identifier=_iAP2Identifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
