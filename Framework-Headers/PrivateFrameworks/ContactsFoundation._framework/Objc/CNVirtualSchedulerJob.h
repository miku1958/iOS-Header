//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNVirtualSchedulerJob : NSObject
{
    unsigned long long _time;
    CDUnknownBlockType _block;
}

@property (readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
@property unsigned long long time; // @synthesize time=_time;

+ (id)jobWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end

