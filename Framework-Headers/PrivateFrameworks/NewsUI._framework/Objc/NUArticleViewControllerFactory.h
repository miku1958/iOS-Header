//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleViewControllerFactory-Protocol.h>

@class NSString;
@protocol NFResolver, NUArticleAdManagerFactory, NUArticleDataProviderFactory, NUDynamicTypeProviding, NUEndOfArticleDataProviderFactory, NUScrollViewKeyCommandHandler, SXAppStateMonitor;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory>
{
    id<NUArticleDataProviderFactory> _articleDataProviderFactory;
    id<NUEndOfArticleDataProviderFactory> _endOfArticleDataProviderFactory;
    id<NUArticleAdManagerFactory> _articleAdManagerFactory;
    id<NUDynamicTypeProviding> _dynamicTypeProviding;
    id<SXAppStateMonitor> _appStateMonitor;
    id<NUScrollViewKeyCommandHandler> _keyCommandHandler;
    id<NFResolver> _resolver;
}

@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property (readonly, nonatomic) id<NUArticleAdManagerFactory> articleAdManagerFactory; // @synthesize articleAdManagerFactory=_articleAdManagerFactory;
@property (readonly, nonatomic) id<NUArticleDataProviderFactory> articleDataProviderFactory; // @synthesize articleDataProviderFactory=_articleDataProviderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<NUDynamicTypeProviding> dynamicTypeProviding; // @synthesize dynamicTypeProviding=_dynamicTypeProviding;
@property (readonly, nonatomic) id<NUEndOfArticleDataProviderFactory> endOfArticleDataProviderFactory; // @synthesize endOfArticleDataProviderFactory=_endOfArticleDataProviderFactory;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NUScrollViewKeyCommandHandler> keyCommandHandler; // @synthesize keyCommandHandler=_keyCommandHandler;
@property (readonly, nonatomic) id<NFResolver> resolver; // @synthesize resolver=_resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;
- (id)createArticleViewControllerWithArticle:(id)arg1;
- (id)createArticleWebViewControllerWithArticle:(id)arg1;
- (id)initWithArticleDataProviderFactory:(id)arg1 endOfArticleDataProviderFactory:(id)arg2 articleAdManagerFactory:(id)arg3 dynamicTypeProviding:(id)arg4 appStateMonitor:(id)arg5 keyCommandHandler:(id)arg6 resolver:(id)arg7;

@end

