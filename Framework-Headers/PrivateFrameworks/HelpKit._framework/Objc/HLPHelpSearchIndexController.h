//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpBookController, NSDictionary;

@interface HLPHelpSearchIndexController : HLPRemoteDataController
{
    HLPHelpBookController *_helpBookController;
    NSDictionary *_searchIndex;
}

@property (strong, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property (strong, nonatomic) NSDictionary *searchIndex; // @synthesize searchIndex=_searchIndex;

- (void).cxx_destruct;
- (id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id *)arg3;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3;

@end

