//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewDragDelegate-Protocol.h>

@class NSIndexPath, UITableView;
@protocol UIDragSession;

@protocol UITableViewDragDelegate_Private <UITableViewDragDelegate>

@optional
- (long long)_tableView:(UITableView *)arg1 dataOwnerForDragSession:(id<UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (BOOL)_tableView:(UITableView *)arg1 dragSessionSupportsSystemDrag:(id<UIDragSession>)arg2;
@end

