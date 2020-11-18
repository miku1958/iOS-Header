//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>
{
    NSMutableArray *_changes;
}

@property (strong, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;

+ (id)changeSetWithChanges:(id)arg1;
+ (Class)changesType;
- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (id)changesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
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

