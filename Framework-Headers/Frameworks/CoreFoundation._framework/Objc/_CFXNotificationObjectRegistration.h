//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer
{
    void *_object;
}

@property (readonly) void *object; // @synthesize object=_object;

+ (Class)childClass;
+ (const CDStruct_90be15af *)stringKeyCallbacks;
- (id)acquireObserver:(void *)arg1 options:(unsigned long long)arg2;
- (BOOL)enumerate:(CDUnknownBlockType)arg1;
- (void)find:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;
- (id)initWithObject:(void *)arg1 parent:(id)arg2;
- (void *)key;
- (void)match:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;

@end

