//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICSearchResult, ICSearchString;

@interface ICSearchOperation : NSOperation
{
    id _objectToSearch;
    ICSearchString *_searchString;
    ICSearchResult *_searchResult;
}

@property (readonly, nonatomic) id objectToSearch; // @synthesize objectToSearch=_objectToSearch;
@property (copy) ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (readonly, copy, nonatomic) ICSearchString *searchString; // @synthesize searchString=_searchString;

+ (unsigned long long)numberOfMatchesOfString:(id)arg1 withinString:(id)arg2;
+ (unsigned long long)relevanceBySearchingForString:(id)arg1 withinString:(id)arg2;
+ (id)tokensFromString:(id)arg1;
- (void).cxx_destruct;
- (id)initWithObjectToSearch:(id)arg1 searchString:(id)arg2;
- (void)main;
- (unsigned long long)relevanceByPerformingSearch;
- (unsigned long long)relevanceBySearchingWithinString:(id)arg1;

@end

