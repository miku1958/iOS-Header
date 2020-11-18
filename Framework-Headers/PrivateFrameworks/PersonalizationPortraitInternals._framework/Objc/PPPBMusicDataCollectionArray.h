//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying>
{
    NSString *_assetVersion;
    NSMutableArray *_experimentalGroups;
    NSMutableArray *_records;
    BOOL _hasMusicSubscription;
    struct {
        unsigned int hasMusicSubscription:1;
    } _has;
}

@property (strong, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property (strong, nonatomic) NSMutableArray *experimentalGroups; // @synthesize experimentalGroups=_experimentalGroups;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (nonatomic) BOOL hasHasMusicSubscription;
@property (nonatomic) BOOL hasMusicSubscription; // @synthesize hasMusicSubscription=_hasMusicSubscription;
@property (strong, nonatomic) NSMutableArray *records; // @synthesize records=_records;

+ (Class)experimentalGroupsType;
+ (Class)recordsType;
- (void).cxx_destruct;
- (void)addExperimentalGroups:(id)arg1;
- (void)addRecords:(id)arg1;
- (void)clearExperimentalGroups;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentalGroupsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)arg1;

@end
