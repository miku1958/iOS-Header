//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCLogState : NSObject
{
    struct __asl_object_s *_asl_store;
    struct __asl_object_s *_asl_client;
    NSURL *_directory;
    NSString *_basename;
    int _fd;
    NSObject<OS_dispatch_source> *_fdDeletionWatcher;
}

@property (strong, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property (strong, nonatomic) NSURL *directory; // @synthesize directory=_directory;

+ (id)defaultLogState;
- (void).cxx_destruct;
- (void)_setLevel:(int)arg1;
- (void)closeLog;
- (const char *)currentSectionID;
- (int)indentationLevel;
- (id)init;
- (void)logMsg:(int)arg1 facility:(const char *)arg2 func:(const char *)arg3 src:(const char *)arg4 lno:(int)arg5 msg:(const char *)arg6 aslmsg:(struct __asl_object_s *)arg7;
- (void)openASLStoreIfNeeded;
- (void)setPath:(const char *)arg1 base:(const char *)arg2;

@end
