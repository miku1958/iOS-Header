//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

@class NSString;
@protocol NSLocking;

@interface HAP2Lock : HAP2LoggingObject
{
    _Atomic unsigned long long _lockCount;
    id<NSLocking> _internalLock;
}

@property (readonly, nonatomic) id<NSLocking> internalLock; // @synthesize internalLock=_internalLock;
@property (readonly, nonatomic) NSString *name;

+ (id)lockWithName:(id)arg1;
+ (id)new;
- (void).cxx_destruct;
- (void)_performBlock:(CDUnknownBlockType)arg1 allowRecursive:(BOOL)arg2;
- (void)assertOwner;
- (id)init;
- (id)initWithLock:(id)arg1 name:(id)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;

@end
