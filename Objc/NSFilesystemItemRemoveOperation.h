//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSFileManager, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation
{
    NSFileManager *_fm;
    NSString *_removePath;
    NSError *_error;
    void *_state;
}

@property (readonly) NSFileManager *fileManager; // @synthesize fileManager=_fm;

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)filesystemItemRemoveOperationWithPath:(id)arg1 fileManager:(id)arg2;
- (BOOL)_delegateSaysProceedAfterError:(id)arg1 removingItemAtPath:(id)arg2;
- (BOOL)_delegateSaysShouldRemoveItemAtPath:(id)arg1;
- (void)_setError:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)initWithPath:(id)arg1 fileManager:(id)arg2;
- (void)main;

@end

