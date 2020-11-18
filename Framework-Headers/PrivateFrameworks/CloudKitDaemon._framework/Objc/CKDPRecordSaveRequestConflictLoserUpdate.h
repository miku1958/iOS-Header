//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>
{
    NSMutableArray *_conflictLoserEtags;
}

@property (strong, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;

- (void).cxx_destruct;
- (void)addConflictLoserEtags:(id)arg1;
- (void)clearConflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
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
