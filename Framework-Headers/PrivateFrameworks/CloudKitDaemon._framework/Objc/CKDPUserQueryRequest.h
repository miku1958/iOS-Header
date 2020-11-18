//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPUserAlias, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUserQueryRequest : PBRequest <NSCopying>
{
    CKDPUserAlias *_alias;
    NSString *_oBSOLETEPcsServiceType;
    NSMutableArray *_sortedBys;
    BOOL _publicKeyRequested;
    struct {
        unsigned int publicKeyRequested:1;
    } _has;
}

@property (strong, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
@property (readonly, nonatomic) BOOL hasAlias;
@property (readonly, nonatomic) BOOL hasOBSOLETEPcsServiceType;
@property (nonatomic) BOOL hasPublicKeyRequested;
@property (strong, nonatomic) NSString *oBSOLETEPcsServiceType; // @synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType;
@property (nonatomic) BOOL publicKeyRequested; // @synthesize publicKeyRequested=_publicKeyRequested;
@property (strong, nonatomic) NSMutableArray *sortedBys; // @synthesize sortedBys=_sortedBys;

+ (id)options;
+ (Class)sortedByType;
- (void).cxx_destruct;
- (void)addSortedBy:(id)arg1;
- (void)clearSortedBys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)sortedByAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortedBysCount;
- (void)writeTo:(id)arg1;

@end

