//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BRKWriter : NSObject
{
    struct os_unfair_lock_s _lock;
    NSString *_path;
}

@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;

@end

