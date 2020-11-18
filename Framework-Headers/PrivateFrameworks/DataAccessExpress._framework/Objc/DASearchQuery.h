//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject
{
    int _timeLimit;
    NSString *_searchString;
    NSPredicate *_searchPredicate;
    id<DASearchQueryConsumer> _consumer;
    NSString *_searchID;
    unsigned long long _state;
    struct _NSRange _range;
}

@property (weak, nonatomic) id<DASearchQueryConsumer> consumer; // @synthesize consumer=_consumer;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property (copy, nonatomic) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property (copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (nonatomic) int timeLimit; // @synthesize timeLimit=_timeLimit;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
- (BOOL)isQueryRunning;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;

@end

