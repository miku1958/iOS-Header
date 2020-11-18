//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/NSLocking-Protocol.h>

@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking>
{
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 cachePath:(id)arg2;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLock;
- (void)unlock;

@end
