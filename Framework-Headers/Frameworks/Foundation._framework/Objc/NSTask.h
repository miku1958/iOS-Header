//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface NSTask : NSObject
{
}

@property (copy) NSArray *arguments;
@property (copy) NSURL *currentDirectoryURL;
@property (copy) NSDictionary *environment;
@property (copy) NSURL *executableURL;
@property (readonly) int processIdentifier;
@property long long qualityOfService;
@property (readonly, getter=isRunning) BOOL running;
@property (strong) id standardError;
@property (strong) id standardInput;
@property (strong) id standardOutput;
@property (copy) CDUnknownBlockType terminationHandler;
@property (readonly) long long terminationReason;
@property (readonly) int terminationStatus;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id *)arg3 terminationHandler:(CDUnknownBlockType)arg4;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
- (id)currentDirectoryPath;
- (id)init;
- (void)interrupt;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)launch;
- (BOOL)launchAndReturnError:(id *)arg1;
- (id)launchPath;
- (BOOL)resume;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)setSpawnedProcessDisclaimed:(BOOL)arg1;
- (BOOL)suspend;
- (long long)suspendCount;
- (void)terminate;

@end
