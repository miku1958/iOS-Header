//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying>
{
    NSMutableArray *_photoInfos;
    int _photoType;
    NSString *_uid;
    CDStruct_86c1f53f _has;
}

@property (nonatomic) BOOL hasPhotoType;
@property (readonly, nonatomic) BOOL hasUid;
@property (strong, nonatomic) NSMutableArray *photoInfos; // @synthesize photoInfos=_photoInfos;
@property (nonatomic) int photoType; // @synthesize photoType=_photoType;
@property (strong, nonatomic) NSString *uid; // @synthesize uid=_uid;

- (id)_bestURLForSize:(int)arg1;
- (id)_photoInfoForSize:(int)arg1 includeSmallerSizes:(BOOL)arg2;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithPlaceDataPhoto:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoInfosCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

