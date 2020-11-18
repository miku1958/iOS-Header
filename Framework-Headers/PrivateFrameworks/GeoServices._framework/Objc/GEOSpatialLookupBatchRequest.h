//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying>
{
    NSMutableArray *_requests;
}

@property (strong, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;

+ (Class)requestType;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestAtIndex:(unsigned long long)arg1;
- (unsigned int)requestTypeCode;
- (unsigned long long)requestsCount;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

