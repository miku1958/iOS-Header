//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIKeyboardTaskQueue;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskExecutionContext : NSObject
{
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    CDUnknownBlockType _continuation;
    id _info;
    CDUnknownBlockType _pendingCompletionBlock;
    UIKeyboardTaskQueue *_executionQueue;
}

@property (readonly, nonatomic) UIKeyboardTaskQueue *executionQueue; // @synthesize executionQueue=_executionQueue;
@property (strong, nonatomic) id info; // @synthesize info=_info;
@property (copy, nonatomic) CDUnknownBlockType pendingCompletionBlock; // @synthesize pendingCompletionBlock=_pendingCompletionBlock;

- (id)childWithContinuation:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithExecutionQueue:(id)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (void)returnExecutionToParent;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)transferExecutionToMainThreadWithTask:(CDUnknownBlockType)arg1;

@end
