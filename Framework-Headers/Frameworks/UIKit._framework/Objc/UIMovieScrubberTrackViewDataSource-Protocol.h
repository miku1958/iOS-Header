//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSNumber, UIMovieScrubberTrackView;

@protocol UIMovieScrubberTrackViewDataSource <NSObject>
- (NSArray *)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(BOOL)arg3;
- (double)movieScrubberTrackViewDuration:(UIMovieScrubberTrackView *)arg1;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(UIMovieScrubberTrackView *)arg1;
@end

