//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class AVAudioFile, AVAudioPCMBuffer, NSString, NSURL;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding>
{
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    BOOL _loops;
    BOOL _shouldStream;
    BOOL _loaded;
    BOOL positional;
    float volume;
    float rate;
    float reverbBlend;
}

@property (nonatomic) BOOL loops; // @synthesize loops=_loops;
@property (nonatomic, getter=isPositional) BOOL positional; // @synthesize positional;
@property (nonatomic) float rate; // @synthesize rate;
@property (nonatomic) float reverbBlend; // @synthesize reverbBlend;
@property (nonatomic) BOOL shouldStream; // @synthesize shouldStream=_shouldStream;
@property (nonatomic) float volume; // @synthesize volume;

+ (id)audioSourceNamed:(id)arg1;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_customDecodingOfSCNAudioSource:(id)arg1;
- (void)_customEncodingOfSCNAudioSource:(id)arg1;
- (void)_load;
- (void)_loadURLWithBundle:(id)arg1;
- (id)audioBuffer;
- (id)audioBufferFormat;
- (id)audioFile;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)initWithAVAudioPCMBuffer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithFileNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)load;
- (void)loadIfNeeded;
- (long long)renderingAlgorithm;

@end
