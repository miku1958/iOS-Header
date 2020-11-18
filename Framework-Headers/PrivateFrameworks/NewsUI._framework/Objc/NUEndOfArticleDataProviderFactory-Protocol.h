//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle;
@protocol NUEndOfArticleDataProvider;

@protocol NUEndOfArticleDataProviderFactory <NSObject>
- (id<NUEndOfArticleDataProvider>)createEndOfArticleDataProviderWithArticle:(FCArticle *)arg1;
@end
