//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ApplePushService/CUTFileCopierDelegate-Protocol.h>

@class NSMutableArray;

@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate>
{
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;
- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)dealloc;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)init;

@end

