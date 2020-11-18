//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, UIView, WFAction, WFActionDrawerCategoriesCollectionViewManager;

@protocol WFActionDrawerCategoriesCollectionViewManagerDelegate <NSObject>
- (void)categoriesCollectionViewManager:(WFActionDrawerCategoriesCollectionViewManager *)arg1 didSelectAction:(WFAction *)arg2;
- (void)categoriesCollectionViewManager:(WFActionDrawerCategoriesCollectionViewManager *)arg1 didSelectCategoryForContentType:(NSString *)arg2 title:(NSString *)arg3;
- (void)categoriesCollectionViewManager:(WFActionDrawerCategoriesCollectionViewManager *)arg1 didSelectDocumentationForAction:(WFAction *)arg2 fromView:(UIView *)arg3;
- (void)categoriesCollectionViewManagerDidSelectCategoryApps:(WFActionDrawerCategoriesCollectionViewManager *)arg1 title:(NSString *)arg2;
- (void)categoriesCollectionViewManagerDidSelectCategoryFavorites:(WFActionDrawerCategoriesCollectionViewManager *)arg1 title:(NSString *)arg2;
- (void)categoriesCollectionViewManagerDidSelectCategoryScripting:(WFActionDrawerCategoriesCollectionViewManager *)arg1 title:(NSString *)arg2;
@end
