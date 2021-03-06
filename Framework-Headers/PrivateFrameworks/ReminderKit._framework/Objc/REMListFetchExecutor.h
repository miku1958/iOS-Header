//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/_REMFetchExecutor.h>

@class NSArray, REMListPredicateDescriptor;

@interface REMListFetchExecutor : _REMFetchExecutor
{
    REMListPredicateDescriptor *_predicateDescriptor;
    NSArray *_sortDescriptors;
    unsigned long long _options;
}

@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) REMListPredicateDescriptor *predicateDescriptor; // @synthesize predicateDescriptor=_predicateDescriptor;
@property (strong, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(unsigned long long)arg3;
- (id)resultsFromFetchResult:(id)arg1 inAccount:(id)arg2 error:(id *)arg3;
- (id)resultsFromFetchResult:(id)arg1 inParentList:(id)arg2 error:(id *)arg3;
- (id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id *)arg3;

@end

