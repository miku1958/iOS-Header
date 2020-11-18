//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIImage;

@interface SKUIPlayButtonImageCache : NSObject
{
    struct os_unfair_lock_s _imageLock;
    NSBundle *_bundle;
    NSString *_playImageName;
    UIImage *_playImage;
    NSString *_pauseImageName;
    UIImage *_pauseImage;
    NSString *_stopImageName;
    UIImage *_stopImage;
}

@property (readonly) UIImage *pauseImage;
@property (readonly) UIImage *playImage;
@property (readonly) UIImage *stopImage;

+ (id)imageCacheForStyle:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (void)preloadImages;

@end
