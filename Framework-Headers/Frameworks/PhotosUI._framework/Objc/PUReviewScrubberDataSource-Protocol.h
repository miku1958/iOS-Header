//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUReviewScrubber;

@protocol PUReviewScrubberDataSource <NSObject>
- (unsigned long long)numberOfPhotosInReviewScrubber:(PUReviewScrubber *)arg1;
- (BOOL)reviewScrubber:(PUReviewScrubber *)arg1 shouldProvideFeedbackForCellAtIndexPath:(NSIndexPath *)arg2;
@end

