//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKUIDividedGridViewCell, EKUIDividedGridViewController;

@protocol EKUIDividedGridViewControllerDelegate <NSObject>
- (void)dividedGridViewController:(EKUIDividedGridViewController *)arg1 didSelectCell:(EKUIDividedGridViewCell *)arg2 atIndex:(long long)arg3;
- (void)dividedGridViewControllerDidLayout:(EKUIDividedGridViewController *)arg1;
@end
