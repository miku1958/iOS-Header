//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NUArticleBarButtonItemManager, UIBarButtonItem;

@protocol NUArticleBarButtonItemManagerDelegate <NSObject>
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performDoneActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performNextActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performShareActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(NUArticleBarButtonItemManager *)arg1;
@end

