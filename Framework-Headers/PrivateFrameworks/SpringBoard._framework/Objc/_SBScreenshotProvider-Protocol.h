//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBScreenFlash, UIImage, UIScreen;

@protocol _SBScreenshotProvider <NSObject>

@property (readonly, nonatomic) SBScreenFlash *flasher;
@property (readonly, nonatomic) UIScreen *screen;

- (UIImage *)captureScreenshot;
@end
