//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSPortCoder.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSConcretePortCoder : NSPortCoder
{
    NSSet *whitelist;
}

- (BOOL)_classAllowed:(Class)arg1;
- (void)_setWhitelist:(id)arg1;
- (void)dealloc;

@end

