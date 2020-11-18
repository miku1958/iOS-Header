//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSString;

@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying>
{
    unsigned long long _searchEngagedActionType;
    NSString *_queryAtEngagement;
    NSString *_searchEngagedBundleId;
    BOOL _didSearchDuringSession;
    struct {
        unsigned int searchEngagedActionType:1;
        unsigned int didSearchDuringSession:1;
    } _has;
}

@property (nonatomic) BOOL didSearchDuringSession; // @synthesize didSearchDuringSession=_didSearchDuringSession;
@property (nonatomic) BOOL hasDidSearchDuringSession;
@property (readonly, nonatomic) BOOL hasQueryAtEngagement;
@property (nonatomic) BOOL hasSearchEngagedActionType;
@property (readonly, nonatomic) BOOL hasSearchEngagedBundleId;
@property (strong, nonatomic) NSString *queryAtEngagement; // @synthesize queryAtEngagement=_queryAtEngagement;
@property (nonatomic) unsigned long long searchEngagedActionType; // @synthesize searchEngagedActionType=_searchEngagedActionType;
@property (strong, nonatomic) NSString *searchEngagedBundleId; // @synthesize searchEngagedBundleId=_searchEngagedBundleId;

- (void).cxx_destruct;
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
