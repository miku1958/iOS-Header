//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ESDaemonSupport/ESDClientDelegate.h>

#import <ESDaemonSupport/DASearchQueryConsumer-Protocol.h>

@class DASearchQuery, NSData;

@interface ESDClientContactsSearchDelegate : ESDClientDelegate <DASearchQueryConsumer>
{
    DASearchQuery *_query;
    NSData *_queryResultData;
}

@property (strong, nonatomic) DASearchQuery *query; // @synthesize query=_query;
@property (strong, nonatomic) NSData *queryResultData; // @synthesize queryResultData=_queryResultData;

- (void).cxx_destruct;
- (void)beginQuery;
- (void)dealloc;
- (void)disable;
- (void)finishWithError:(id)arg1;
- (id)initWithAccountID:(id)arg1 queryDictionary:(id)arg2 client:(id)arg3;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;

@end
