//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, NSMutableArray;

@interface CKDPRecordField : PBCodable <NSCopying>
{
    NSMutableArray *_actions;
    CKDPRecordFieldIdentifier *_identifier;
    CKDPRecordFieldValue *_value;
}

@property (strong, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) CKDPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) CKDPRecordFieldValue *value; // @synthesize value=_value;

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)arg1;
- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (id)actionAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addAction:(id)arg1;
- (void)clearActions;
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

