//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;
@protocol CNAutocompleteFetchDelegate, CNFuture;

@interface CNAutocompleteQueryResponsePreparer : NSObject
{
    NSMutableOrderedSet *_previouslyReturnedResults;
    id<CNAutocompleteFetchDelegate> _delegate;
    id<CNFuture> _priorityResultsFuture;
}

@property (readonly, weak, nonatomic) id<CNAutocompleteFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) id<CNFuture> priorityResultsFuture; // @synthesize priorityResultsFuture=_priorityResultsFuture;

- (void).cxx_destruct;
- (id)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (id)applyPriorityResultsOrder:(id)arg1;
- (id)askDelegateToAdjustResults;
- (id)findUniqueResults:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)prepareResults:(id)arg1;
- (id)resultsNotPreviouslyReturned:(id)arg1;
- (id)sortResults;
- (id)suppressResultsWithAddresses:(id)arg1;

@end

