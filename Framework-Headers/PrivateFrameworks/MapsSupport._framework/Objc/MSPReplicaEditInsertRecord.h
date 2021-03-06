//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit
{
    id<MSPReplicaRecord> _recordWithInformationToInsert;
}

@property (readonly, nonatomic) id<MSPReplicaRecord> recordWithInformationToInsert; // @synthesize recordWithInformationToInsert=_recordWithInformationToInsert;

- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

