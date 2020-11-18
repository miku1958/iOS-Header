//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPDetails, GEORPNotification, GEORPResolution, NSString;

@interface GEORPProblemStatus : PBCodable <NSCopying>
{
    double _creationDate;
    GEORPDetails *_details;
    GEORPNotification *_notification;
    NSString *_problemId;
    GEORPResolution *_problemResolution;
    int _problemState;
    struct {
        unsigned int creationDate:1;
        unsigned int problemState:1;
    } _has;
}

@property (nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic) GEORPDetails *details; // @synthesize details=_details;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasDetails;
@property (readonly, nonatomic) BOOL hasNotification;
@property (readonly, nonatomic) BOOL hasProblemId;
@property (readonly, nonatomic) BOOL hasProblemResolution;
@property (nonatomic) BOOL hasProblemState;
@property (strong, nonatomic) GEORPNotification *notification; // @synthesize notification=_notification;
@property (strong, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
@property (strong, nonatomic) GEORPResolution *problemResolution; // @synthesize problemResolution=_problemResolution;
@property (nonatomic) int problemState; // @synthesize problemState=_problemState;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

