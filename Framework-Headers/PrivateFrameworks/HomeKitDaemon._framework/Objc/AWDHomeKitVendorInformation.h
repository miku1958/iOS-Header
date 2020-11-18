//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying>
{
    NSString *_firmwareVersion;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
}

@property (strong, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasName;
@property (strong, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (strong, nonatomic) NSString *model; // @synthesize model=_model;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;

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

