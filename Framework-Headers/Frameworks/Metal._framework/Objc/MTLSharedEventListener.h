//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MTLSharedEventListener : NSObject
{
}

@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue; // @dynamic dispatchQueue;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;

@end

