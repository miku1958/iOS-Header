//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PDSProtoTopic : PBCodable <NSCopying>
{
    NSMutableArray *_appInfos;
    NSString *_name;
    NSString *_qualifier;
}

@property (strong, nonatomic) NSMutableArray *appInfos; // @synthesize appInfos=_appInfos;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *qualifier; // @synthesize qualifier=_qualifier;

+ (Class)appInfoType;
- (void).cxx_destruct;
- (void)addAppInfo:(id)arg1;
- (id)appInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)appInfosCount;
- (void)clearAppInfos;
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
