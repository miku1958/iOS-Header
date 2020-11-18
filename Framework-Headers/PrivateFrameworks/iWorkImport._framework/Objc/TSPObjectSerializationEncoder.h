//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPEncoder-Protocol.h>

@class NSError, NSString, TSPMemoryComponentWriteChannel;
@protocol OS_dispatch_data, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder>
{
    BOOL _alwaysDefragmentData;
    NSError *_error;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_ioQueue;
    struct ObjectSerializationDirectory _directory;
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
    NSObject<OS_dispatch_data> *_encodedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishEncodingWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAlwaysDefragmentData:(BOOL)arg1;
- (id)newMetadataComponentWriteChannel;
- (id)newRootObjectComponentWriteChannel;

@end
