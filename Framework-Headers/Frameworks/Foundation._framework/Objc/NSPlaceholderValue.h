//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (void)dealloc;
- (void)finalize;
- (void)getValue:(void *)arg1;
- (id)init;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (const char *)objCType;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

