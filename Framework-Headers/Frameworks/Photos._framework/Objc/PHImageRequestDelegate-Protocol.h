//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequestDelegate-Protocol.h>

@class PHImageRequest;

@protocol PHImageRequestDelegate <PHMediaRequestDelegate>
- (void)imageRequest:(PHImageRequest *)arg1 isQueryingCacheAndDidWait:(BOOL *)arg2 didFindImage:(BOOL *)arg3 resultHandler:(void (^)(struct CGImage *, BOOL, NSError *))arg4;
- (void)imageRequest:(PHImageRequest *)arg1 isRequestingScheduledWorkBlock:(void (^)(PHImageRequest *))arg2;
- (BOOL)imageRequestCanRequestRepair:(PHImageRequest *)arg1;
@end

