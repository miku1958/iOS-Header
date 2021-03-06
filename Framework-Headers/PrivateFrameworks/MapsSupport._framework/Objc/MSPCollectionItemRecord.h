//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPOrderedReplicaRecord-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class MSPPosition, MSPVectorTimestamp, NSData, NSString;

@interface MSPCollectionItemRecord : NSObject <MSPOrderedReplicaRecord, NSSecureCoding>
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

@property (readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MSPPosition *position; // @synthesize position=_position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;

+ (id)recordWithContentsOfRecord:(id)arg1;
+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)tombstoneRecord;
- (void).cxx_destruct;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;
- (id)initWithValue:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;

@end

