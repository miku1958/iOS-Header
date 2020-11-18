//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTransitSection : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _actionSheetArtworkIndexs;
    CDStruct_9f2792e4 _routeDetailsArtworkIndexs;
    CDStruct_9f2792e4 _stepIndexs;
    NSString *_actionSheetName;
    int _nextOptionsIndex;
    BOOL _disableAlightNotifications;
    struct {
        unsigned int nextOptionsIndex:1;
        unsigned int disableAlightNotifications:1;
    } _has;
}

@property (readonly, nonatomic) unsigned int *actionSheetArtworkIndexs;
@property (readonly, nonatomic) unsigned long long actionSheetArtworkIndexsCount;
@property (strong, nonatomic) NSString *actionSheetName; // @synthesize actionSheetName=_actionSheetName;
@property (nonatomic) BOOL disableAlightNotifications; // @synthesize disableAlightNotifications=_disableAlightNotifications;
@property (readonly, nonatomic) BOOL hasActionSheetName;
@property (nonatomic) BOOL hasDisableAlightNotifications;
@property (nonatomic) BOOL hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex; // @synthesize nextOptionsIndex=_nextOptionsIndex;
@property (readonly, nonatomic) unsigned int *routeDetailsArtworkIndexs;
@property (readonly, nonatomic) unsigned long long routeDetailsArtworkIndexsCount;
@property (readonly, nonatomic) unsigned int *stepIndexs;
@property (readonly, nonatomic) unsigned long long stepIndexsCount;

- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addActionSheetArtworkIndex:(unsigned int)arg1;
- (void)addRouteDetailsArtworkIndex:(unsigned int)arg1;
- (void)addStepIndex:(unsigned int)arg1;
- (void)clearActionSheetArtworkIndexs;
- (void)clearRouteDetailsArtworkIndexs;
- (void)clearStepIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)setActionSheetArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setRouteDetailsArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setStepIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)stepIndexAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
