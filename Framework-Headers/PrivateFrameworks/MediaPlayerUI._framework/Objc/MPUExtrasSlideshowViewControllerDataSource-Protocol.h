//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUExtrasSlideshowViewController;

@protocol MPUExtrasSlideshowViewControllerDataSource <NSObject>
- (unsigned long long)numberOfImagesForSlideshowViewController:(MPUExtrasSlideshowViewController *)arg1;
- (void)slideshowViewController:(MPUExtrasSlideshowViewController *)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
@end

