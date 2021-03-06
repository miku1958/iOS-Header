//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MFInvocationQOSOverride : NSObject
{
    struct pthread_override_s *_override;
    BOOL _lowPriority;
    unsigned int _desiredQoS;
    struct _opaque_pthread_t *_pthread;
}

@property (readonly, nonatomic) unsigned int desiredQoS; // @synthesize desiredQoS=_desiredQoS;
@property (readonly, nonatomic, getter=isLowPriority) BOOL lowPriority; // @synthesize lowPriority=_lowPriority;
@property (readonly, nonatomic) struct _opaque_pthread_t *pthread; // @synthesize pthread=_pthread;

- (void)applyOverrideWhileForeground:(BOOL)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPthread:(struct _opaque_pthread_t *)arg1 desiredQoS:(unsigned int)arg2 lowPriority:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)removeOverride;

@end

