//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class BRFieldPkgItem;

@interface BRFieldPkgLocalItem : PBCodable <NSCopying>
{
    long long _fileID;
    long long _size;
    unsigned int _generationID;
    BRFieldPkgItem *_item;
    struct {
        unsigned int size:1;
        unsigned int generationID:1;
    } _has;
}

@property (nonatomic) long long fileID; // @synthesize fileID=_fileID;
@property (nonatomic) unsigned int generationID; // @synthesize generationID=_generationID;
@property (nonatomic) BOOL hasGenerationID;
@property (nonatomic) BOOL hasSize;
@property (strong, nonatomic) BRFieldPkgItem *item; // @synthesize item=_item;
@property (nonatomic) long long size; // @synthesize size=_size;

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

