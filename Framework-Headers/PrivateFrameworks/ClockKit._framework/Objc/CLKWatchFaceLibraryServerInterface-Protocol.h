//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol CLKWatchFaceLibraryServerInterface
- (void)openWatchFaceURLWithBookmarkData:(NSData *)arg1 sourceApplicationBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)validateFaceType:(NSString *)arg1 faceBundleId:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
@end

