//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPShareIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier *_value;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (strong, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
@property (strong, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
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

