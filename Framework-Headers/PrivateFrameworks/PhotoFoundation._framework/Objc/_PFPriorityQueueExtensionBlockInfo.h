//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PFPriorityQueueExtensionBlockInfo : NSObject
{
    unsigned int _qos;
    CDUnknownBlockType _block;
    unsigned long long _priority;
}

@property (readonly) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly) unsigned long long priority; // @synthesize priority=_priority;
@property (readonly) unsigned int qos; // @synthesize qos=_qos;

- (void).cxx_destruct;
- (id)initWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;

@end

