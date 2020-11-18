//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class NSError;

@protocol SVVideoLoadingStateObserving <NSObject>

@property (readonly, copy, nonatomic) NSError *error;
@property (copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock;
@property (copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock;
@property (copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock;
@property (readonly, nonatomic) unsigned long long state;

@end

