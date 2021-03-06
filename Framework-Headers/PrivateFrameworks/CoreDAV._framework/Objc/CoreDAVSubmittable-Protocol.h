//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class NSError;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@protocol CoreDAVSubmittable <NSObject>

@property (nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) id<CoreDAVTaskManager> taskManager;
@property (nonatomic) double timeoutInterval;

- (void)finishEarlyWithError:(NSError *)arg1;
- (void)submitWithTaskManager:(id<CoreDAVTaskManager>)arg1;
@end

