//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUExtrasCarouselViewController;

@protocol MPUExtrasCarouselViewControllerDelegate <NSObject>

@optional
- (void)carouselViewController:(MPUExtrasCarouselViewController *)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(MPUExtrasCarouselViewController *)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(void (^)(BOOL))arg3;
@end
