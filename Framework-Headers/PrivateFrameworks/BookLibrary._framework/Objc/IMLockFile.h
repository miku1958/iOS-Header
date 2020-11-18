//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMLockFile : NSObject
{
    int _fd;
    BOOL _locked;
    NSString *_path;
}

@property (readonly, nonatomic) BOOL locked; // @synthesize locked=_locked;
@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;

+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;
- (void).cxx_destruct;
- (BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (BOOL)lock:(BOOL)arg1;
- (BOOL)tryLock:(BOOL)arg1;
- (void)unlock;

@end

