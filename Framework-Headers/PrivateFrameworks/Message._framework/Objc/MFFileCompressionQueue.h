//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;
@protocol OS_os_activity;

@interface MFFileCompressionQueue : NSObject
{
    BOOL _activityCreated;
    NSMutableArray *_fileCompressionQueue;
    NSLock *_fileCompressionQueueLock;
    NSObject<OS_os_activity> *_libraryCompressionActivity;
    NSObject<OS_os_activity> *_fileCompressionQueueActivity;
}

@property (nonatomic) BOOL activityCreated; // @synthesize activityCreated=_activityCreated;
@property (strong, nonatomic) NSMutableArray *fileCompressionQueue; // @synthesize fileCompressionQueue=_fileCompressionQueue;
@property (strong, nonatomic) NSObject<OS_os_activity> *fileCompressionQueueActivity; // @synthesize fileCompressionQueueActivity=_fileCompressionQueueActivity;
@property (strong, nonatomic) NSLock *fileCompressionQueueLock; // @synthesize fileCompressionQueueLock=_fileCompressionQueueLock;
@property (strong, nonatomic) NSObject<OS_os_activity> *libraryCompressionActivity; // @synthesize libraryCompressionActivity=_libraryCompressionActivity;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addFile:(id)arg1;
- (void)createCompressionActivity;
- (BOOL)hasNext;
- (id)init;
- (id)nextFile;
- (long long)size;

@end

