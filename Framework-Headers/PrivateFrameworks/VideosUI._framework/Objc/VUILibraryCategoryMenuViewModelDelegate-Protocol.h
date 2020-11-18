//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSError, VUILibraryCategoryMenuViewModel, VUIMenuDataSource;

@protocol VUILibraryCategoryMenuViewModelDelegate <NSObject>

@optional
- (void)categoryViewModel:(VUILibraryCategoryMenuViewModel *)arg1 categoriesDidChange:(VUIMenuDataSource *)arg2;
- (void)categoryViewModel:(VUILibraryCategoryMenuViewModel *)arg1 fetchDidCompleteWithCategories:(VUIMenuDataSource *)arg2 error:(NSError *)arg3;
@end

