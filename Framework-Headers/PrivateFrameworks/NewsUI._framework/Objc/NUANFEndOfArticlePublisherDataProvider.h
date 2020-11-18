//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCArticle, NUANFEndOfArticleFeedDataProvider, NUEndOfArticleSettings;

@interface NUANFEndOfArticlePublisherDataProvider : NSObject
{
    FCArticle *_article;
    NUEndOfArticleSettings *_settings;
    NUANFEndOfArticleFeedDataProvider *_feedDataProvider;
}

@property (readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property (readonly, nonatomic) NUANFEndOfArticleFeedDataProvider *feedDataProvider; // @synthesize feedDataProvider=_feedDataProvider;
@property (readonly, copy, nonatomic) NUEndOfArticleSettings *settings; // @synthesize settings=_settings;

- (void).cxx_destruct;
- (id)initWithArticle:(id)arg1 settings:(id)arg2 headlines:(id)arg3;

@end
