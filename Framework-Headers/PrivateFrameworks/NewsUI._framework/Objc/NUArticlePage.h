//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPage-Protocol.h>

@class FCArticle, FCAsyncOnceOperation, NSString, NUPageStyle, UIViewController;
@protocol FCOperationCanceling, NUActivityProvider, NUArticleActivityFactory, NUArticleHostViewControllerFactory, NUPageable;

@interface NUArticlePage : NSObject <NUPage>
{
    FCArticle *_article;
    id<NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
    id<NUArticleActivityFactory> _articleActivityFactory;
    NUPageStyle *_pageStyle;
    id<NUActivityProvider> _activityProvider;
    FCAsyncOnceOperation *_asyncOnceOperation;
    id<FCOperationCanceling> _asyncOnceCancelHandler;
    UIViewController<NUPageable> *_articleViewController;
    unsigned long long _pageNextAction;
}

@property (strong, nonatomic) id<NUActivityProvider> activityProvider; // @synthesize activityProvider=_activityProvider;
@property (readonly, nonatomic) BOOL allowNeighboringAdvertising;
@property (readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property (readonly, nonatomic) id<NUArticleActivityFactory> articleActivityFactory; // @synthesize articleActivityFactory=_articleActivityFactory;
@property (readonly, nonatomic) id<NUArticleHostViewControllerFactory> articleHostViewControllerFactory; // @synthesize articleHostViewControllerFactory=_articleHostViewControllerFactory;
@property (strong, nonatomic) UIViewController<NUPageable> *articleViewController; // @synthesize articleViewController=_articleViewController;
@property (strong, nonatomic) id<FCOperationCanceling> asyncOnceCancelHandler; // @synthesize asyncOnceCancelHandler=_asyncOnceCancelHandler;
@property (strong, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long pageNextAction; // @synthesize pageNextAction=_pageNextAction;
@property (strong, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityProvider:(CDUnknownBlockType)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)asyncOnceLoadPageStyle:(CDUnknownBlockType)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)initWithArticle:(id)arg1 articleHostViewControllerFactory:(id)arg2 articleActivityFactory:(id)arg3 pageNextAction:(unsigned long long)arg4;
- (void)pageStyling:(CDUnknownBlockType)arg1;
- (void)prepare;
- (void)unprepare;
- (id)viewController;

@end

