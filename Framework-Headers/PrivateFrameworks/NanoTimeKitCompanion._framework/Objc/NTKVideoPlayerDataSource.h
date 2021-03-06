//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKVideoPlayerListing, UIImage;

@interface NTKVideoPlayerDataSource : NSObject
{
    UIImage *_posterImage;
    NTKVideoPlayerListing *_currentListing;
}

@property (strong, nonatomic) NTKVideoPlayerListing *currentListing; // @synthesize currentListing=_currentListing;
@property (strong, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;

- (void).cxx_destruct;
- (void)advanceToNextListing:(unsigned long long)arg1;
- (id)init;
- (id)listingToQueueOncePlaybackStarts;
- (id)listingsToQueueAfterCurrent;

@end

