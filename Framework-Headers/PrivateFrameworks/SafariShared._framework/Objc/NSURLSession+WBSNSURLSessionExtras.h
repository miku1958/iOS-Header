//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

@interface NSURLSession (WBSNSURLSessionExtras)
+ (id)safari_sharedSession;
- (void)_safari_downloadFirstValidImageWithURLs:(id)arg1 failedURLDownloadsToErrorsDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

