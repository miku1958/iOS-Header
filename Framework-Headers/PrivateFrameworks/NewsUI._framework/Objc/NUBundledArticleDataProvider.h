//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProvider-Protocol.h>
#import <NewsUI/SXEmbedDataSource-Protocol.h>
#import <NewsUI/SXReachabilityProvider-Protocol.h>
#import <NewsUI/SXResourceDataSource-Protocol.h>

@class FCArticle, NSString;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataSource, SXReachabilityProvider, NUArticleDataProvider>
{
    FCArticle *_article;
}

@property (strong, nonatomic) FCArticle *article; // @synthesize article=_article;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addReachabilityObserver:(id)arg1;
- (id)embedForType:(id)arg1;
- (id)fileURLForBundleURL:(id)arg1;
- (id)initWithArticle:(id)arg1;
- (BOOL)isNetworkReachable;
- (void)load;
- (void)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)loadImagesForImageRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performBlockForFontsInBundle:(CDUnknownBlockType)arg1;

@end

