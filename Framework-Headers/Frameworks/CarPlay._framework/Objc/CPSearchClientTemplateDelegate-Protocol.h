//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplateDelegate-Protocol.h>

@class CPListItem, CPSearchTemplate, NSString;

@protocol CPSearchClientTemplateDelegate <CPTemplateDelegate>
- (void)searchTemplate:(CPSearchTemplate *)arg1 selectedResult:(CPListItem *)arg2 completionHandler:(void (^)(void))arg3;
- (void)searchTemplate:(CPSearchTemplate *)arg1 updateSearchResultsForSearchText:(NSString *)arg2 completionResults:(void (^)(NSArray *))arg3;
- (void)searchTemplateSearchButtonPressed:(CPSearchTemplate *)arg1;
@end
