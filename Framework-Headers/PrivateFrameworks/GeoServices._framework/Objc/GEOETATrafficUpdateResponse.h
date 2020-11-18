//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying>
{
    NSMutableArray *_routes;
    NSData *_sessionState;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (nonatomic) int status; // @synthesize status=_status;

- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)writeTo:(id)arg1;

@end
