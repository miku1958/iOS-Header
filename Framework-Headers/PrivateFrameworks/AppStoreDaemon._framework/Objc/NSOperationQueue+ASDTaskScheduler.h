//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

#import <AppStoreDaemon/ASDTaskScheduler-Protocol.h>

@class NSString;

@interface NSOperationQueue (ASDTaskScheduler) <ASDTaskScheduler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)scheduleBlock:(CDUnknownBlockType)arg1;
@end
