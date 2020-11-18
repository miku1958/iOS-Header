//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CSSearchQueryContext, NSString;
@protocol MDSearchQueryResultProcessor;

@protocol MDSearchQueryService
- (void)cancelWithCompletionHandler:(void (^)(void))arg1;
- (void)startQuery:(NSString *)arg1 withQueryContext:(CSSearchQueryContext *)arg2 resultProcessor:(id<MDSearchQueryResultProcessor>)arg3 completionHandler:(void (^)(void))arg4;
@end

