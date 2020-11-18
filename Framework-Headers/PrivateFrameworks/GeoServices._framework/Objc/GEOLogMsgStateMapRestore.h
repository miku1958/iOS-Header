//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgStateMapRestore : PBCodable <NSCopying>
{
    NSMutableArray *_targetLayouts;
}

@property (strong, nonatomic) NSMutableArray *targetLayouts; // @synthesize targetLayouts=_targetLayouts;

+ (Class)targetLayoutType;
- (void)addTargetLayout:(id)arg1;
- (void)clearTargetLayouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)targetLayoutAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetLayoutsCount;
- (void)writeTo:(id)arg1;

@end
