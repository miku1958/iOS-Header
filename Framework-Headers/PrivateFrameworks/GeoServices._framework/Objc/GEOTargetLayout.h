//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTargetLayout : PBCodable <NSCopying>
{
    int _layoutInfo;
    int _layoutStyle;
    int _uiTarget;
    struct {
        unsigned int layoutInfo:1;
        unsigned int layoutStyle:1;
        unsigned int uiTarget:1;
    } _has;
}

@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) int layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property (nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) int uiTarget; // @synthesize uiTarget=_uiTarget;

- (int)StringAsLayoutInfo:(id)arg1;
- (int)StringAsLayoutStyle:(id)arg1;
- (int)StringAsUiTarget:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)layoutInfoAsString:(int)arg1;
- (id)layoutStyleAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)uiTargetAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

