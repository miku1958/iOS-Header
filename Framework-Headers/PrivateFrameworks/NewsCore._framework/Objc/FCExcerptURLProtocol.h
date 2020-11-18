//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCExcerptURLProtocol : NSURLProtocol
{
    FCCKContentFetchOperation *_fetchOperation;
}

@property (strong, nonatomic) FCCKContentFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)excerptURLForArticleID:(id)arg1 changeTag:(id)arg2;
+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setupWithArticleDatabase:(id)arg1;
+ (void)unregister;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
