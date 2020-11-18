//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask
{
    NSArray *_tasks;
}

@property (readonly, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;

- (void).cxx_destruct;
- (BOOL)cancel;
- (void)cancelSubtasks;
- (id)description;
- (id)initWithName:(id)arg1 tasks:(id)arg2;
- (id)run:(id *)arg1;
- (id)runSubtask:(id)arg1 error:(id *)arg2;

@end

