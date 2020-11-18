//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying>
{
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    NSString *_deviceSettingsLocale;
}

@property (strong, nonatomic) NSString *deviceInputLocale; // @synthesize deviceInputLocale=_deviceInputLocale;
@property (strong, nonatomic) NSString *deviceOutputLocale; // @synthesize deviceOutputLocale=_deviceOutputLocale;
@property (strong, nonatomic) NSString *deviceSettingsLocale; // @synthesize deviceSettingsLocale=_deviceSettingsLocale;
@property (readonly, nonatomic) BOOL hasDeviceInputLocale;
@property (readonly, nonatomic) BOOL hasDeviceOutputLocale;
@property (readonly, nonatomic) BOOL hasDeviceSettingsLocale;

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

