//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HDHFDataStoreDelegate, OS_dispatch_queue;

@interface HDHFDataStore : NSObject
{
    shared_ptr_c7cae3aa _fileSystem;
    struct os_unfair_lock_s _lock;
    shared_ptr_88ae0538 _highFrequencyDataStore;
    _Atomic BOOL _invalidated;
    _Atomic BOOL _hasOpenStore;
    NSObject<OS_dispatch_queue> *_openQueue;
    id<HDHFDataStoreDelegate> _delegate;
    NSString *_fileSystemPath;
}

@property (weak, nonatomic) id<HDHFDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSString *fileSystemPath; // @synthesize fileSystemPath=_fileSystemPath;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_convertExceptionsToError:(id *)arg1 inBlock:(CDUnknownBlockType)arg2;
- (shared_ptr_88ae0538)_highFrequencyDataStoreWithError:(id *)arg1;
- (shared_ptr_88ae0538)_lock_highFrequencyDataStoreWithError:(id *)arg1;
- (BOOL)_lock_openHighFrequencyDataStoreWithError:(id *)arg1;
- (shared_ptr_88ae0538)_lock_primitiveOpenHighFrequencyDataStoreWithError:(id *)arg1;
- (BOOL)accessStoreWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)discardStoreWithError:(id *)arg1;
- (CDUnknownBlockType)flushHandlerForInvalidation:(BOOL)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 fileSystem:(shared_ptr_c7cae3aa)arg2;

@end
