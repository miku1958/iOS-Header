//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequestDelegate-Protocol.h>

@class NSDictionary, NSError, NSURL, PDVideoRequest;

@protocol PHVideoRequestDelegate <PHMediaRequestDelegate>
- (void)videoRequest:(PDVideoRequest *)arg1 didFinishLoadingVideoURL:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)videoRequest:(PDVideoRequest *)arg1 isRequestingVideoChoosingForSize:(struct CGSize)arg2;
@end

