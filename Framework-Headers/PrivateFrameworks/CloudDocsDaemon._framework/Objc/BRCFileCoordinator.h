//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileCoordinator.h>

@class BRCAccountSession, NSObject, NSURL;
@protocol OS_dispatch_source;

@interface BRCFileCoordinator : NSFileCoordinator
{
    BRCAccountSession *_session;
    unsigned long long _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _doneHandler;
    BOOL _cancelled;
    BOOL _isUpdateForReconnecting;
}

@property (nonatomic) BOOL isUpdateForReconnecting; // @synthesize isUpdateForReconnecting=_isUpdateForReconnecting;

+ (void)itemAtPath:(id)arg1 didBounceToName:(id)arg2;
+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(BOOL)arg5;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;
- (void).cxx_destruct;
- (void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(CDUnknownBlockType)arg5 fcHandler:(CDUnknownBlockType)arg6 error:(id)arg7;
- (void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3;
- (void)cancel;
- (void)cancelAfterDelay:(double)arg1;
- (id)initWithSession:(id)arg1 doneHandler:(CDUnknownBlockType)arg2;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(BOOL)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(CDUnknownBlockType)arg6;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;

@end

