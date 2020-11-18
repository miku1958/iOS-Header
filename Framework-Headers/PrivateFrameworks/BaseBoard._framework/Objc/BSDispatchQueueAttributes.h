//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/NSCopying-Protocol.h>

@protocol OS_dispatch_queue, OS_dispatch_queue_attr;

@interface BSDispatchQueueAttributes : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue_attr> *_attrs;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue_attr> *attributes; // @synthesize attributes=_attrs;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;

+ (id)_attributesWithAttributes:(id)arg1;
+ (id)concurrent;
+ (id)serial;
- (void).cxx_destruct;
- (id)autoreleaseFrequency:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)inactive;
- (id)serviceClass:(unsigned int)arg1;
- (id)serviceClass:(unsigned int)arg1 relativePriority:(int)arg2;
- (id)targetQueue:(id)arg1;

@end
