//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol GCPhotoVideoXPCProxyServiceRemoteServerInterface
- (void)generateURLFor:(NSString *)arg1 optionalFolder:(NSString *)arg2 withReply:(void (^)(NSURL *, NSString *))arg3;
- (void)onVideoRecordingStart:(void (^)(NSError *))arg1;
- (void)onVideoRecordingStopWithURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)takeScreenshotWithReply:(void (^)(NSError *))arg1;
@end
