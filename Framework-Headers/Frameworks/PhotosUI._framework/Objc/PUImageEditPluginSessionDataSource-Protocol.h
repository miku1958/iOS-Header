//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUEditPluginSessionDataSource-Protocol.h>

@class PUEditPluginSession;

@protocol PUImageEditPluginSessionDataSource <PUEditPluginSessionDataSource>
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadDisplaySizeImageWithHandler:(void (^)(UIImage *))arg2;
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadFullSizeImageWithHandler:(void (^)(NSURL *, long long, NSString *))arg2;
@end

