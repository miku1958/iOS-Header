//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying>
{
    NSMutableArray *_objects;
}

@property (strong, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;

+ (Class)objectType;
- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)clearObjects;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

