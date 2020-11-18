//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITableView;

@interface TLKTableViewScrollTester : NSObject
{
    BOOL _directionUp;
    BOOL _finishedFirstScroll;
    double _scrollTime;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _firstScroll;
    UITableView *_tableView;
    double _startTime;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (nonatomic) BOOL directionUp; // @synthesize directionUp=_directionUp;
@property (nonatomic) BOOL finishedFirstScroll; // @synthesize finishedFirstScroll=_finishedFirstScroll;
@property (copy, nonatomic) CDUnknownBlockType firstScroll; // @synthesize firstScroll=_firstScroll;
@property (nonatomic) double scrollTime; // @synthesize scrollTime=_scrollTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)fire:(id)arg1;
- (id)init;
- (void)performScrollTestOnTableView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performScrollTestOnTableView:(id)arg1 firstScroll:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

