//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class STScrollView, SXTangierController, UIScrollView;

@protocol SXTangierControllerDelegate <NSObject>

@optional
- (void)tangierController:(SXTangierController *)arg1 scrollViewDidEndDragging:(STScrollView *)arg2 willDecelerate:(BOOL)arg3;
- (void)tangierController:(SXTangierController *)arg1 scrollViewWillBeginDragging:(STScrollView *)arg2;
- (void)tangierController:(SXTangierController *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)tangierControllerDidScroll:(SXTangierController *)arg1;
- (void)tangierControllerDidStopScrolling:(SXTangierController *)arg1;
- (void)tangierControllerWillStartScrolling:(SXTangierController *)arg1;
@end
