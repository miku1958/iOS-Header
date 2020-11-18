//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProvider-Protocol.h>
#import <NewsUI/NUFontRegistrator-Protocol.h>
#import <NewsUI/SXEmbedDataProvider-Protocol.h>
#import <NewsUI/SXResourceDataSource-Protocol.h>

@class FCArticle, NSString;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider>
{
    FCArticle *_article;
}

@property (readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)embedForType:(id)arg1;
- (id)fileURLForBundleURL:(id)arg1;
- (void)fileURLForURL:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)initWithArticle:(id)arg1;
- (void)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)loadImagesForImageRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performBlockForFontsInBundle:(CDUnknownBlockType)arg1;
- (void)registerFontsWithCompletion:(CDUnknownBlockType)arg1;
- (id)translateURL:(id)arg1;

@end

