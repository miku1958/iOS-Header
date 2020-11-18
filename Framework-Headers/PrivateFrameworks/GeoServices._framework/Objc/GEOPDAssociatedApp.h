//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAssociatedApp : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateAppAdamIds;
    NSString *_preferredAppAdamId;
}

@property (strong, nonatomic) NSMutableArray *alternateAppAdamIds; // @synthesize alternateAppAdamIds=_alternateAppAdamIds;
@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (strong, nonatomic) NSString *preferredAppAdamId; // @synthesize preferredAppAdamId=_preferredAppAdamId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateAppAdamIdType;
+ (id)associatedAppForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)addAlternateAppAdamId:(id)arg1;
- (id)alternateAppAdamIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateAppAdamIdsCount;
- (void)clearAlternateAppAdamIds;
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

