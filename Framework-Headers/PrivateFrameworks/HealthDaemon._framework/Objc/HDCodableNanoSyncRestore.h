//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDSyncObjectCollection-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncRestore : PBCodable <HDSyncObjectCollection, HDNanoSyncDescription, NSCopying>
{
    NSMutableArray *_objectDatas;
    int _objectType;
    struct {
        unsigned int objectType:1;
    } _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasObjectType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property (nonatomic) int objectType; // @synthesize objectType=_objectType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
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
- (void)setObjects:(id)arg1;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end

