//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NRPBMigrationDevices : PBCodable <NSCopying>
{
    NSMutableArray *_devices;
    NSData *_phoneUDIDHash;
}

@property (strong, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;
@property (readonly, nonatomic) BOOL hasPhoneUDIDHash;
@property (strong, nonatomic) NSData *phoneUDIDHash; // @synthesize phoneUDIDHash=_phoneUDIDHash;

+ (Class)devicesType;
- (void).cxx_destruct;
- (void)addDevices:(id)arg1;
- (void)clearDevices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)devicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicesCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

