//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewDragItemContext : NSObject
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property (strong, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1 forTableView:(id)arg2;

@end

