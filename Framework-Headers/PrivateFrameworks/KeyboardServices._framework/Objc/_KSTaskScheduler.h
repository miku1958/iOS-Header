//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject
{
    NSMutableDictionary *_allTasks;
}

@property (strong, nonatomic) NSMutableDictionary *allTasks; // @synthesize allTasks=_allTasks;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)registerTask:(id)arg1;
- (void)unregisterTask:(id)arg1;

@end

