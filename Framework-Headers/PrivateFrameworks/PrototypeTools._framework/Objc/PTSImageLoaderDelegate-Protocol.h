//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSString, PTSImageLoader, UIImage;

@protocol PTSImageLoaderDelegate <NSObject>
- (void)imageLoader:(PTSImageLoader *)arg1 didLoadImage:(UIImage *)arg2 forFilename:(NSString *)arg3;
- (void)imageLoaderDidFinishLoadingImages:(PTSImageLoader *)arg1;
@end

