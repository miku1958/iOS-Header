//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKWebContentViewController;

@protocol MKWebContentViewControllerDelegate <NSObject>
- (BOOL)isWebContentViewControllerParentPlacecardLoading:(MKWebContentViewController *)arg1;
- (void)removeWebContentViewController:(MKWebContentViewController *)arg1;
- (void)webContentViewController:(MKWebContentViewController *)arg1 performHeightChangeWithBlock:(void (^)(void))arg2 animated:(BOOL)arg3 completion:(void (^)(BOOL))arg4;
- (void)webContentViewControllerDidStopLoading:(MKWebContentViewController *)arg1;
@end

