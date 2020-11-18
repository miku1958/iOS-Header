//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSString;

@interface HMPBMetadataCharacteristic : PBCodable <NSCopying>
{
    NSString *_desc;
    NSString *_type;
}

@property (strong, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property (readonly, nonatomic) BOOL hasDesc;
@property (readonly, nonatomic) BOOL hasType;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

