//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@class NSString;

@interface NSCondition : NSObject <NSLocking>
{
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)broadcast;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)signal;
- (void)unlock;
- (void)wait;
- (BOOL)waitUntilDate:(id)arg1;

@end

