//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/NSObject-Protocol.h>

@class NSArray;

@protocol TVPPlaybackImageLoader <NSObject>
- (void)cancelImageLoadingForIdentifiers:(NSArray *)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (void)invalidate;
- (NSArray *)loadImagesForTimes:(NSArray *)arg1 maxSize:(struct CGSize)arg2 withHandler:(void (^)(id, UIImage *, double, double))arg3;
@end
