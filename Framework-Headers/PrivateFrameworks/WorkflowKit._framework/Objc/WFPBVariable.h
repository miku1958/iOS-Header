//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface WFPBVariable : PBCodable <NSCopying>
{
    NSMutableArray *_items;
    NSString *_key;
}

@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;

+ (Class)itemsType;
- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
