//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@protocol SearchUIKeyboardableTableViewScrollDelegate <NSObject>

@property (nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent;

- (void)didBeginScrolling;
- (void)didScrollPastBottomOfContent;
@end

