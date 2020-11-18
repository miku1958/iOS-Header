//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBReportConcernSubmission : PBCodable <NSCopying>
{
    int _cancelLocation;
    int _reportConcernLocation;
    int _resultType;
    struct {
        unsigned int cancelLocation:1;
        unsigned int reportConcernLocation:1;
        unsigned int resultType:1;
    } _has;
}

@property (nonatomic) int cancelLocation; // @synthesize cancelLocation=_cancelLocation;
@property (nonatomic) BOOL hasCancelLocation;
@property (nonatomic) BOOL hasReportConcernLocation;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int reportConcernLocation; // @synthesize reportConcernLocation=_reportConcernLocation;
@property (nonatomic) int resultType; // @synthesize resultType=_resultType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
