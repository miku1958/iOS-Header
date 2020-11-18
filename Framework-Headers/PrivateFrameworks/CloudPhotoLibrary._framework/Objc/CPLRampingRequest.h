//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying>
{
    NSMutableArray *_requests;
}

@property (strong, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;

+ (Class)requestType;
- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestsCount;
- (void)writeTo:(id)arg1;

@end
