//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTTaskScheduler-Protocol.h>

@class NSString;

@interface MTGCDTaskScheduler : NSObject <MTTaskScheduler>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_scheduleTask:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scheduleTask:(id)arg1;
- (void)scheduleTaskGroup:(id)arg1;

@end

