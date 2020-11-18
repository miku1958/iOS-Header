//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPLocation, CLPMeta, CLPPressure;

@interface CLPPressureCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;
    CLPPressure *_pressure;
    CLPLocation *_pressureLocation;
}

@property (strong, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
@property (strong, nonatomic) CLPPressure *pressure; // @synthesize pressure=_pressure;
@property (strong, nonatomic) CLPLocation *pressureLocation; // @synthesize pressureLocation=_pressureLocation;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

