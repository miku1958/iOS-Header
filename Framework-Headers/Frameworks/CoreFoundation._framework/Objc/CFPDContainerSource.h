//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/CFPDSource.h>

__attribute__((visibility("hidden")))
@interface CFPDContainerSource : CFPDSource
{
    struct __CFString *_containerPath;
}

- (struct __CFString *)container;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 container:(struct __CFString *)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;

@end

