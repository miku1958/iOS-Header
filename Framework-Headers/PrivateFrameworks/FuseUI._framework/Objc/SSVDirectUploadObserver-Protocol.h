//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class NSArray, SSVDirectUploadQueue;

@protocol SSVDirectUploadObserver <NSObject>

@optional
- (void)uploadQueue:(SSVDirectUploadQueue *)arg1 statusDidChangeForUploads:(NSArray *)arg2;
- (void)uploadQueue:(SSVDirectUploadQueue *)arg1 uploadsDidChange:(NSArray *)arg2;
@end

