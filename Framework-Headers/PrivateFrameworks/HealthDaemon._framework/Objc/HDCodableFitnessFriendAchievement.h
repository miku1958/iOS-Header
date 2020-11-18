//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying>
{
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    NSData *_friendUUID;
    HDCodableSample *_sample;
    NSString *_templateUniqueName;
    struct {
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
    } _has;
}

@property (nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (strong, nonatomic) NSData *friendUUID; // @synthesize friendUUID=_friendUUID;
@property (nonatomic) BOOL hasCompletedDate;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property (strong, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *templateUniqueName; // @synthesize templateUniqueName=_templateUniqueName;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
