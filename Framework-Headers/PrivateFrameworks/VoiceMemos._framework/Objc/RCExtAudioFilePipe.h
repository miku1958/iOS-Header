//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface RCExtAudioFilePipe : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accessQueueID;
    struct OpaqueExtAudioFile *_audioFileRef;
    struct AudioStreamBasicDescription _outputFormatDescriptionStruct;
    struct AudioStreamBasicDescription _sourceFormatDescriptionStruct;
    NSURL *_sourceURL;
    unsigned long long _sourceFileSize;
}

@property (readonly, nonatomic) struct AudioStreamBasicDescription *outputFormatDescription;
@property (readonly, nonatomic) unsigned long long sourceFileSize; // @synthesize sourceFileSize=_sourceFileSize;
@property (readonly, nonatomic) struct AudioStreamBasicDescription *sourceFormatDescription;
@property (readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;

- (void).cxx_destruct;
- (void)_accessExtAudioFileWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned int)arg3;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2;
- (BOOL)seekToSourceFrameIndex:(long long)arg1;
- (long long)sourceCurrentFrameIndex;
- (long long)sourceFrameIndexForTime:(double)arg1;

@end
