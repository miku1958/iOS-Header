//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FPThreadedCopier : NSObject
{
    long long _numberOfInflightCopies;
    NSObject<OS_dispatch_semaphore> *_bufferLimitSemaphore;
    NSMutableArray *_buffers;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore; // @synthesize bufferLimitSemaphore=_bufferLimitSemaphore;
@property (strong, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property (nonatomic) long long numberOfInflightCopies; // @synthesize numberOfInflightCopies=_numberOfInflightCopies;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;

+ (id)sharedCopier;
- (void).cxx_destruct;
- (void)beginOperation;
- (int)beginReading:(id)arg1 error:(id *)arg2;
- (int)beginWriting:(id)arg1 overwriteDestination:(BOOL)arg2 error:(id *)arg3;
- (BOOL)copy:(id)arg1 to:(id)arg2 overwriteDestination:(BOOL)arg3 progress:(id)arg4 error:(id *)arg5;
- (void)endOperation;
- (BOOL)finishReading:(int)arg1 writing:(int)arg2 error:(id *)arg3;
- (id)init;

@end
