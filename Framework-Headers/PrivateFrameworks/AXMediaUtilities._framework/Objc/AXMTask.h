//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMTask : NSObject
{
    BOOL _complete;
    CDUnknownBlockType _taskCompleteBlock;
}

@property (nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (copy, nonatomic) CDUnknownBlockType taskCompleteBlock; // @synthesize taskCompleteBlock=_taskCompleteBlock;

- (void).cxx_destruct;
- (void)markAsComplete:(BOOL)arg1;

@end

