//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)arg1;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;
- (void)unlock;

@end

