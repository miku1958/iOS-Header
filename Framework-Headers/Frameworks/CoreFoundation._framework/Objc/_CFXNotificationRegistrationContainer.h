//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase
{
    CDStruct_a86bd46d _children;
}

+ (Class)childClass;
- (void)addChild:(id)arg1;
- (void)dealloc;
- (BOOL)enumerate:(CDUnknownBlockType)arg1;
- (id)initWithParent:(id)arg1;
- (id)initWithParent:(id)arg1 childKeyCallbacks:(const CDStruct_90be15af *)arg2;
- (void)invalidate;
- (void)removeChild:(id)arg1;
- (void)resetChildren;

@end

