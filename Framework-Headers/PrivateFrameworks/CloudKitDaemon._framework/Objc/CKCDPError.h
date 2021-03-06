//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPError : PBCodable <NSCopying>
{
    int _auxiliaryCode;
    NSString *_auxiliaryDomain;
    NSMutableArray *_auxiliaryUserInfos;
    int _code;
    NSString *_message;
    int _targetPartition;
    struct {
        unsigned int auxiliaryCode:1;
        unsigned int code:1;
        unsigned int targetPartition:1;
    } _has;
}

@property (nonatomic) int auxiliaryCode; // @synthesize auxiliaryCode=_auxiliaryCode;
@property (strong, nonatomic) NSString *auxiliaryDomain; // @synthesize auxiliaryDomain=_auxiliaryDomain;
@property (strong, nonatomic) NSMutableArray *auxiliaryUserInfos; // @synthesize auxiliaryUserInfos=_auxiliaryUserInfos;
@property (nonatomic) int code; // @synthesize code=_code;
@property (nonatomic) BOOL hasAuxiliaryCode;
@property (readonly, nonatomic) BOOL hasAuxiliaryDomain;
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasTargetPartition;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) int targetPartition; // @synthesize targetPartition=_targetPartition;

+ (Class)auxiliaryUserInfoType;
- (void).cxx_destruct;
- (int)StringAsCode:(id)arg1;
- (void)addAuxiliaryUserInfo:(id)arg1;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)clearAuxiliaryUserInfos;
- (id)codeAsString:(int)arg1;
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

