//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDSyncChange-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying>
{
    long long _endAnchor;
    long long _startAnchor;
    NSMutableArray *_objectDatas;
    int _objectType;
    NSMutableArray *_requiredAnchors;
    struct {
        unsigned int endAnchor:1;
        unsigned int startAnchor:1;
        unsigned int objectType:1;
    } _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endAnchor; // @synthesize endAnchor=_endAnchor;
@property (nonatomic) BOOL hasEndAnchor;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) BOOL hasStartAnchor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property (nonatomic) int objectType; // @synthesize objectType=_objectType;
@property (strong, nonatomic) NSMutableArray *requiredAnchors; // @synthesize requiredAnchors=_requiredAnchors;
@property (nonatomic) long long startAnchor; // @synthesize startAnchor=_startAnchor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;
- (void).cxx_destruct;
- (void)addObjectData:(id)arg1;
- (void)addRequiredAnchors:(id)arg1;
- (void)clearObjectDatas;
- (void)clearRequiredAnchors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodedObjects;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectDatasCount;
- (BOOL)readFrom:(id)arg1;
- (id)requiredAnchorMapWithError:(id *)arg1;
- (id)requiredAnchorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredAnchorsCount;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end
