//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoEnableServiceModeRequest : PBRequest <NSCopying>
{
    NSString *_uniqueID;
    BOOL _cancelOutstandingRequests;
    struct {
        unsigned int cancelOutstandingRequests:1;
    } _has;
}

@property (nonatomic) BOOL cancelOutstandingRequests; // @synthesize cancelOutstandingRequests=_cancelOutstandingRequests;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (strong, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;

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

