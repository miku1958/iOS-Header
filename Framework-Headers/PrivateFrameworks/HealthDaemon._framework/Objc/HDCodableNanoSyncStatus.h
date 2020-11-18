//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDNanoSyncPersistentUserInfoCopying-Protocol.h>
#import <HealthDaemon/HDSyncAnchorMap-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncStatus : PBCodable <HDSyncAnchorMap, HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>
{
    NSMutableArray *_anchors;
    int _statusCode;
    struct {
        unsigned int statusCode:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *anchors; // @synthesize anchors=_anchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (Class)anchorsType;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)statusWithStatusCode:(int)arg1;
- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addAnchors:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (id)anchorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)anchorsCount;
- (void)clearAnchors;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (BOOL)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

