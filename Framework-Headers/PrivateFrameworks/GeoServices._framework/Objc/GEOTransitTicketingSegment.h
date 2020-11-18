//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying>
{
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
}

@property (readonly, nonatomic) BOOL hasSegmentName;
@property (readonly, nonatomic) BOOL hasTicketingUrl;
@property (strong, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property (strong, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property (strong, nonatomic) NSString *ticketingUrl; // @synthesize ticketingUrl=_ticketingUrl;

+ (Class)pathType;
- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (void)clearPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

