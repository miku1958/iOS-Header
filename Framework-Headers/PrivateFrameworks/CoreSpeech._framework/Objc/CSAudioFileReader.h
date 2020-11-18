//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSAudioFileReaderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioFileReader : NSObject
{
    struct OpaqueExtAudioFile *_fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    double _bufferDuration;
    struct AudioStreamBasicDescription _outASBD;
    id<CSAudioFileReaderDelegate> _delegate;
}

@property (weak, nonatomic) id<CSAudioFileReaderDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_readAudioBufferAndFeed;
- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (BOOL)prepareRecording:(id)arg1;
- (id)readSamplesFromChannelIdx:(unsigned int)arg1;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (BOOL)startRecording;
- (void)stopRecording;

@end

