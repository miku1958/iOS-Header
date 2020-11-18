//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MMCS/NSCopying-Protocol.h>

@class NSString;

@interface C2MPClientInfo : PBCodable <NSCopying>
{
    NSString *_processName;
    NSString *_processVersion;
    NSString *_productBuild;
    NSString *_productName;
    NSString *_productType;
    NSString *_productVersion;
}

@property (readonly, nonatomic) BOOL hasProcessName;
@property (readonly, nonatomic) BOOL hasProcessVersion;
@property (readonly, nonatomic) BOOL hasProductBuild;
@property (readonly, nonatomic) BOOL hasProductName;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasProductVersion;
@property (strong, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property (strong, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property (strong, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
@property (strong, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property (strong, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (strong, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;

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

