//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioTransportCommon/NSCopying-Protocol.h>

@interface ATCIOA2StreamFormat : NSObject <NSCopying>
{
    unsigned int _formatID;
    unsigned int _formatFlags;
    unsigned int _bytesPerPacket;
    unsigned int _framesPerPacket;
    unsigned int _bytesPerFrame;
    unsigned int _channelsPerFrame;
    unsigned int _bitsPerChannel;
    double _sampleRate;
}

@property (nonatomic) unsigned int bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property (nonatomic) unsigned int bytesPerFrame; // @synthesize bytesPerFrame=_bytesPerFrame;
@property (nonatomic) unsigned int bytesPerPacket; // @synthesize bytesPerPacket=_bytesPerPacket;
@property (nonatomic) unsigned int channelsPerFrame; // @synthesize channelsPerFrame=_channelsPerFrame;
@property (nonatomic) unsigned int formatFlags; // @synthesize formatFlags=_formatFlags;
@property (nonatomic) unsigned int formatID; // @synthesize formatID=_formatID;
@property (nonatomic) unsigned int framesPerPacket; // @synthesize framesPerPacket=_framesPerPacket;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;

+ (id)aeaStreamFormatWithDictionary:(id)arg1;
+ (id)aeaStreamFormatsWithRangedDictionary:(id)arg1;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)framesToBytes:(unsigned int)arg1;
- (unsigned long long)hash;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1;
- (id)initWithIOAudio2Dictionary:(id)arg1;
- (id)initWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2 commonPCMFormat:(unsigned int)arg3 isInterleaved:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;

@end
