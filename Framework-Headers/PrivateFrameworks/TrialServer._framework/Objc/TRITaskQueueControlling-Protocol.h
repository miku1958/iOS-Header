//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSSet, NSString;

@protocol TRITaskQueueControlling
- (BOOL)cancelTasksWithTag:(NSString *)arg1;
- (BOOL)cancelTasksWithTag:(NSString *)arg1 excludingTasks:(NSArray *)arg2;
- (BOOL)enumerateTasksWithTagsIntersectingTagSet:(NSSet *)arg1 block:(void (^)(TRITaskRecord *, BOOL *))arg2;
@end

