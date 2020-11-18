//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPAccessoryMeta, CLPMeta, NSMutableArray, NSString;

@interface CLPLocationCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_accessoryLocations;
    CLPAccessoryMeta *_accessoryMeta;
    NSString *_appBundleId;
    NSMutableArray *_appBundleIds;
    NSMutableArray *_locations;
    int _mcc;
    CLPMeta *_meta;
    int _mnc;
    int _rat;
    NSString *_tripId;
    struct {
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int rat:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *accessoryLocations; // @synthesize accessoryLocations=_accessoryLocations;
@property (strong, nonatomic) CLPAccessoryMeta *accessoryMeta; // @synthesize accessoryMeta=_accessoryMeta;
@property (strong, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (strong, nonatomic) NSMutableArray *appBundleIds; // @synthesize appBundleIds=_appBundleIds;
@property (readonly, nonatomic) BOOL hasAccessoryMeta;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasMcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) BOOL hasRat;
@property (strong, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property (nonatomic) int mcc; // @synthesize mcc=_mcc;
@property (strong, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
@property (nonatomic) int mnc; // @synthesize mnc=_mnc;
@property (nonatomic) int rat; // @synthesize rat=_rat;
@property (strong, nonatomic) NSString *tripId; // @synthesize tripId=_tripId;

+ (Class)accessoryLocationType;
+ (Class)appBundleIdsType;
+ (Class)locationType;
- (void).cxx_destruct;
- (id)accessoryLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessoryLocationsCount;
- (void)addAccessoryLocation:(id)arg1;
- (void)addAppBundleIds:(id)arg1;
- (void)addLocation:(id)arg1;
- (id)appBundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdsCount;
- (void)clearAccessoryLocations;
- (void)clearAppBundleIds;
- (void)clearLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end
