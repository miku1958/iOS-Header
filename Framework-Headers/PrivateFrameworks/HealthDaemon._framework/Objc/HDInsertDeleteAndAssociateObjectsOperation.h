//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSArray, NSDictionary;

@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation
{
    NSDictionary *_objectsToInsertByDataProvenance;
    NSArray *_objectsToDelete;
    NSDictionary *_associations;
}

@property (readonly, copy, nonatomic) NSDictionary *associations; // @synthesize associations=_associations;
@property (readonly, copy, nonatomic) NSArray *objectsToDelete; // @synthesize objectsToDelete=_objectsToDelete;
@property (readonly, copy, nonatomic) NSDictionary *objectsToInsertByDataProvenance; // @synthesize objectsToInsertByDataProvenance=_objectsToInsertByDataProvenance;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectsToInsertByDataProvenance:(id)arg1 objectsToDelete:(id)arg2 associations:(id)arg3;
- (BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end
