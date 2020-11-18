//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class RTPredicateInspector;
@protocol RTPersistenceContextDelegate;

@interface RTPersistenceContext : NSManagedObjectContext
{
    long long _mirroringQualityOfService;
    id<RTPersistenceContextDelegate> _delegate;
    RTPredicateInspector *_predicateInspector;
    unsigned long long _options;
}

@property (weak) id<RTPersistenceContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long mirroringQualityOfService; // @synthesize mirroringQualityOfService=_mirroringQualityOfService;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) RTPredicateInspector *predicateInspector; // @synthesize predicateInspector=_predicateInspector;

- (void).cxx_destruct;
- (BOOL)_processError:(inout id *)arg1;
- (BOOL)_shouldExecute:(id *)arg1;
- (void)_updateRequest:(id *)arg1 includingContextOptions:(unsigned long long)arg2;
- (BOOL)allowTombstones;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)predicateWithDefaultSubstitutionVariables:(id)arg1;
- (BOOL)save:(id *)arg1;
- (BOOL)shouldSubstituteVariables:(id)arg1 inPredicate:(id)arg2 entityName:(id)arg3 model:(id)arg4;
- (id)substitutionVariableKeys;
- (BOOL)validateEntityName:(id)arg1 inModel:(id)arg2;

@end
