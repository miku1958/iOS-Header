//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEODeviceConfig : PBCodable <NSCopying>
{
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
}

@property (strong, nonatomic) NSString *deviceHwIdentifier; // @synthesize deviceHwIdentifier=_deviceHwIdentifier;
@property (strong, nonatomic) NSString *deviceOsVersion; // @synthesize deviceOsVersion=_deviceOsVersion;
@property (readonly, nonatomic) BOOL hasDeviceHwIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceOsVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
