//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLKProcessInfo : NSObject
{
    struct __SecTask *_currentTask;
}

@property (nonatomic) struct __SecTask *currentTask; // @synthesize currentTask=_currentTask;

+ (id)currentProcessInfo;
+ (BOOL)isSandboxed;
- (BOOL)boolValueForEntitlement:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)valueForEntitlement:(id)arg1;
- (BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end

