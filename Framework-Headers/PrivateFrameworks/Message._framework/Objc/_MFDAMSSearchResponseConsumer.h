//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/_MFDAMSBasicConsumer.h>

#import <Message/DASearchQueryConsumer-Protocol.h>

@class MFConditionLock, MFMailMessageStoreSearchResult, NSDate;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer>
{
    NSDate *latestDateToAdd;
    NSDate *earliestDateAdded;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    MFMailMessageStoreSearchResult *searchResult;
}

@property (readonly, strong, nonatomic) NSDate *earliestDateAdded; // @synthesize earliestDateAdded;
@property (strong, nonatomic) NSDate *latestDateToAdd; // @synthesize latestDateToAdd;
@property (readonly, strong, nonatomic) MFMailMessageStoreSearchResult *searchResult; // @synthesize searchResult;

- (void)dealloc;
- (BOOL)handleItems:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (void)resetDoneCondition;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)waitUntilDone;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;

@end

