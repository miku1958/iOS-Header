//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUCellConfiguration : NSObject
{
}

+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5;
+ (void)configureCellForSizing:(id)arg1;
+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5;
+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3;
+ (double)expandedTableViewCellHeight;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;
+ (id)mediaEntityPropertiesToFetch;
+ (id)reuseIdentifier;
+ (id)tableViewBackgroundColor;
+ (id)tableViewCellBackgroundColor;
+ (Class)tableViewCellClass;
+ (double)tableViewCellHeight;
+ (id)tableViewSeparatorColor;
+ (struct UIEdgeInsets)tableViewSeparatorInset;
+ (long long)tableViewSeparatorStyle;
+ (BOOL)wantsScrollViewDidEndDecelerating;
+ (BOOL)wantsScrollViewDidScroll;
+ (BOOL)wantsScrollViewDidScrollInScrollView;
+ (void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned long long)arg4;

@end

