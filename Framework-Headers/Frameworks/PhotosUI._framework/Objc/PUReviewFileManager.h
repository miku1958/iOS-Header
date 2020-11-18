//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;
@protocol OS_dispatch_queue;

@interface PUReviewFileManager : NSObject
{
    NSFileManager *__fileManager;
    NSObject<OS_dispatch_queue> *__fileManagementQueue;
    NSURL *__safePathURL;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_fileManagementQueue; // @synthesize _fileManagementQueue=__fileManagementQueue;
@property (readonly, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
@property (readonly, nonatomic) NSURL *_safePathURL; // @synthesize _safePathURL=__safePathURL;

+ (id)defaultManager;
- (void).cxx_destruct;
- (BOOL)_allowedToDeleteItemAtURL:(id)arg1;
- (BOOL)_removeItemAtURL:(id)arg1 error:(id *)arg2 stackshot:(id)arg3;
- (id)initWithFileManager:(id)arg1;
- (void)removeItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)removeItemAtURL:(id)arg1 error:(id *)arg2;

@end

