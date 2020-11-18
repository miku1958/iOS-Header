//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventKeyGeneration : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _certified;
    int _reason;
    AWDHomeKitVendorInformation *_vendorDetails;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int reason:1;
    } _has;
}

@property (nonatomic) int certified; // @synthesize certified=_certified;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;

- (void).cxx_destruct;
- (int)StringAsCertified:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (id)certifiedAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

