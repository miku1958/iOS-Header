//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCSearchResult, NSString;

@interface FCSearchOperation : FCOperation
{
    BOOL _shouldFetchFullHeadline;
    FCCloudContext *_cloudContext;
    NSString *_searchString;
    unsigned long long _batchSize;
    NSString *_keyboardInputMode;
    double _scale;
    CDUnknownBlockType _searchResultsBlock;
    FCSearchResult *_searchResult;
    unsigned long long _parsecQueryID;
}

@property (nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (strong, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property (nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property (nonatomic) unsigned long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (strong, nonatomic) FCSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (copy, nonatomic) CDUnknownBlockType searchResultsBlock; // @synthesize searchResultsBlock=_searchResultsBlock;
@property (copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (nonatomic) BOOL shouldFetchFullHeadline; // @synthesize shouldFetchFullHeadline=_shouldFetchFullHeadline;

- (void).cxx_destruct;
- (id)_fetchFullHeadlineResultsForArticles:(id)arg1;
- (id)_fetchResultsForArticlesWithBatchSize:(unsigned long long)arg1;
- (id)_fetchResultsForTagsWithBatchSize:(unsigned long long)arg1;
- (id)initWithSearchText:(id)arg1 cloudContext:(id)arg2 parsecQueryID:(unsigned long long)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end
