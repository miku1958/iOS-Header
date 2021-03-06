//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying>
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
    struct {
        unsigned int uniqueID:1;
    } _has;
}

@property (strong, nonatomic) ICPBDGSFinishDelegationRequest *finishDelegationRequest; // @synthesize finishDelegationRequest=_finishDelegationRequest;
@property (readonly, nonatomic) BOOL hasFinishDelegationRequest;
@property (readonly, nonatomic) BOOL hasStartDelegationRequest;
@property (nonatomic) BOOL hasUniqueID;
@property (strong, nonatomic) ICPBDGSStartDelegationRequest *startDelegationRequest; // @synthesize startDelegationRequest=_startDelegationRequest;
@property (nonatomic) unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

