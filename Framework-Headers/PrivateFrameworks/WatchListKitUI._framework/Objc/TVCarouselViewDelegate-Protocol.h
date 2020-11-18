//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKitUI/NSObject-Protocol.h>

@class TVCarouselView;

@protocol TVCarouselViewDelegate <NSObject>

@optional
- (void)carouselView:(TVCarouselView *)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(TVCarouselView *)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(TVCarouselView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewDidScroll:(TVCarouselView *)arg1;
@end

