//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLStateTracker : NSObject
{
    unsigned long long _handle;
}

@property (readonly, nonatomic) void *identifier;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;
- (void)dealloc;
- (BOOL)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;
- (id)initWithQueue:(id)arg1;

@end
