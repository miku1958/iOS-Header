//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTIndexBasedTaskScheduler <NSObject>
- (void)cancelAllTasks;
- (void)cancelTask:(void (^)(void (^)(void)))arg1;
- (void)scheduleTask:(void (^)(void (^)(void)))arg1 forIndex:(unsigned long long)arg2;
- (void)taskReady:(void (^)(void (^)(void)))arg1 forIndex:(unsigned long long)arg2;
@end

