//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying>
{
    NSMutableArray *_manifestEntrys;
    NSData *_manifestHash;
    NSString *_passTypeIdentifier;
    unsigned int _sequenceCounter;
    NSString *_serialNumber;
    struct {
        unsigned int sequenceCounter:1;
    } _has;
}

@property (nonatomic) BOOL hasSequenceCounter;
@property (strong, nonatomic) NSMutableArray *manifestEntrys; // @synthesize manifestEntrys=_manifestEntrys;
@property (strong, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property (strong, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property (nonatomic) unsigned int sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property (strong, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;

+ (Class)manifestEntryType;
- (void).cxx_destruct;
- (void)addManifestEntry:(id)arg1;
- (void)clearManifestEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)manifestEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestEntrysCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
