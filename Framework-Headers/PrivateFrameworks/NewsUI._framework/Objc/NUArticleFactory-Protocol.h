//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle, NSArray;
@protocol FCHeadlineProviding;

@protocol NUArticleFactory <NSObject>
- (FCArticle *)createArticleForHeadline:(id<FCHeadlineProviding>)arg1;
- (NSArray *)createArticlesForArticleIDs:(NSArray *)arg1;
@end
