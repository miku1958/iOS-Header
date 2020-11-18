//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying>
{
    NSString *_deviceName;
    NSMutableArray *_knownManifestHashes;
    unsigned int _protocolVersion;
    BOOL _shouldAdvertise;
    struct {
        unsigned int protocolVersion:1;
        unsigned int shouldAdvertise:1;
    } _has;
}

@property (strong, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasShouldAdvertise;
@property (strong, nonatomic) NSMutableArray *knownManifestHashes; // @synthesize knownManifestHashes=_knownManifestHashes;
@property (nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (nonatomic) BOOL shouldAdvertise; // @synthesize shouldAdvertise=_shouldAdvertise;

+ (Class)knownManifestHashesType;
- (void).cxx_destruct;
- (void)addKnownManifestHashes:(id)arg1;
- (void)clearKnownManifestHashes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)knownManifestHashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)knownManifestHashesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

