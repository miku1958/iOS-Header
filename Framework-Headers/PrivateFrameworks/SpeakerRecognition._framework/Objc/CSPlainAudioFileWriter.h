//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/CSAudioFileWriter-Protocol.h>

@class NSString, NSURL;

@interface CSPlainAudioFileWriter : NSObject <CSAudioFileWriter>
{
    BOOL isWriting;
    struct OpaqueExtAudioFile *fFile;
    struct AudioStreamBasicDescription inASBD;
    struct AudioStreamBasicDescription outASBD;
    NSURL *_fileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)saveAudioChunck:(id)arg1 toURL:(id)arg2;
- (void).cxx_destruct;
- (void)addContextKey:(id)arg1 fromMetaFile:(id)arg2;
- (void)addContextKey:(id)arg1 withContext:(id)arg2;
- (BOOL)addSamples:(const void *)arg1 numSamples:(long long)arg2;
- (void)dealloc;
- (BOOL)endAudio;
- (id)initWithFilepath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;

@end

