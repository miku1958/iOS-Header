//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKTaskScheduler : NSObject
{
}

- (void)cancelAllTasks;
- (void)cancelTaskForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)scheduleTask:(CDUnknownBlockType)arg1;

@end

