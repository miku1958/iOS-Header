//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplicaEditRemoveTombstone.h>

@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone
{
    NSDate *_modificationDate;
}

@property (readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;

- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

