//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>
#import <CompanionSync/SYChange-Protocol.h>

@class NSData, NSString;

@interface SYChange : PBCodable <SYChange, NSCopying>
{
    unsigned long long _version;
    NSData *_changeData;
    NSString *_objectId;
    NSString *_sequencer;
    int _type;
}

@property (strong, nonatomic) NSData *changeData; // @synthesize changeData=_changeData;
@property (readonly, nonatomic) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasChangeData;
@property (readonly, nonatomic) BOOL hasSequencer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (strong, nonatomic) NSString *sequencer; // @synthesize sequencer=_sequencer;
@property (readonly) Class superclass;
@property (nonatomic) int type; // @synthesize type=_type;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2;
+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 encodeUsingVersion:(long long)arg3;
+ (id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3;
- (void).cxx_destruct;
- (id)changeObjectWithSerializer:(id)arg1;
- (id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectForStore:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

