//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosExtras/NSObject-Protocol.h>

@class VideosExtrasCarouselViewController;

@protocol VideosExtrasCarouselViewControllerDelegate <NSObject>

@optional
- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(void (^)(BOOL))arg3;
@end

