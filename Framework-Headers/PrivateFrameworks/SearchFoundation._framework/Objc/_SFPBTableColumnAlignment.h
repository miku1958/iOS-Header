//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTableColumnAlignment-Protocol.h>

@class NSData, NSString;

@interface _SFPBTableColumnAlignment : PBCodable <_SFPBTableColumnAlignment, NSSecureCoding>
{
    CDStruct_92ac6441 _has;
    BOOL _isEqualWidth;
    int _columnAlignment;
    int _dataAlignment;
}

@property (nonatomic) int columnAlignment; // @synthesize columnAlignment=_columnAlignment;
@property (nonatomic) int dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasColumnAlignment;
@property (readonly, nonatomic) BOOL hasDataAlignment;
@property (readonly, nonatomic) BOOL hasIsEqualWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

