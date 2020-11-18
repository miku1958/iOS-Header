//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying>
{
    NSString *_applicationIdentifier;
    NSData *_expressPassInformation;
    NSString *_uniqueID;
    BOOL _cancelOutstandingRequests;
    BOOL _requestAuthorization;
    struct {
        unsigned int cancelOutstandingRequests:1;
        unsigned int requestAuthorization:1;
    } _has;
}

@property (strong, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (nonatomic) BOOL cancelOutstandingRequests; // @synthesize cancelOutstandingRequests=_cancelOutstandingRequests;
@property (strong, nonatomic) NSData *expressPassInformation; // @synthesize expressPassInformation=_expressPassInformation;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) BOOL requestAuthorization; // @synthesize requestAuthorization=_requestAuthorization;
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

