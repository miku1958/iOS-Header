//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface UMTask : NSObject
{
    BOOL _isFinished;
    int _pid;
    NSString *_name;
    NSString *_reason;
    NSString *_bundleID;
    NSUUID *_uuid;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) int pid; // @synthesize pid=_pid;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)taskWithName:(id)arg1 reason:(id)arg2;
+ (id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3;
- (void).cxx_destruct;
- (void)begin;
- (id)description;
- (void)end;
- (id)init;

@end

