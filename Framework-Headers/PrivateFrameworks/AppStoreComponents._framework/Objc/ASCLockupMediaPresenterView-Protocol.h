//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCScreenshots, ASCTrailers, ASCVideoView, NSString, UIImage;

@protocol ASCLockupMediaPresenterView <NSObject>

@property (readonly, nonatomic) struct CGSize preferredScreenshotSize;

- (void)setImage:(UIImage *)arg1 atIndex:(long long)arg2 withDecoration:(NSString *)arg3;
- (void)setNumberOfViews:(unsigned long long)arg1;
- (void)setScreenshots:(ASCScreenshots *)arg1;
- (void)setTrailers:(ASCTrailers *)arg1;
- (void)setVideoView:(ASCVideoView *)arg1;
@end

