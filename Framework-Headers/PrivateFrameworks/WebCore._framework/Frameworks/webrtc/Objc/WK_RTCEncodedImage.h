//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface WK_RTCEncodedImage : NSObject
{
    unsigned char _flags;
    BOOL _completeFrame;
    int _encodedWidth;
    int _encodedHeight;
    unsigned int _timeStamp;
    int _spatialIndex;
    NSData *_buffer;
    long long _captureTimeMs;
    long long _ntpTimeMs;
    long long _encodeStartMs;
    long long _encodeFinishMs;
    unsigned long long _frameType;
    long long _rotation;
    NSNumber *_qp;
    unsigned long long _contentType;
}

@property (strong, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property (nonatomic) long long captureTimeMs; // @synthesize captureTimeMs=_captureTimeMs;
@property (nonatomic) BOOL completeFrame; // @synthesize completeFrame=_completeFrame;
@property (nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property (nonatomic) long long encodeFinishMs; // @synthesize encodeFinishMs=_encodeFinishMs;
@property (nonatomic) long long encodeStartMs; // @synthesize encodeStartMs=_encodeStartMs;
@property (nonatomic) int encodedHeight; // @synthesize encodedHeight=_encodedHeight;
@property (nonatomic) int encodedWidth; // @synthesize encodedWidth=_encodedWidth;
@property (nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property (nonatomic) unsigned long long frameType; // @synthesize frameType=_frameType;
@property (nonatomic) long long ntpTimeMs; // @synthesize ntpTimeMs=_ntpTimeMs;
@property (strong, nonatomic) NSNumber *qp; // @synthesize qp=_qp;
@property (nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property (nonatomic) int spatialIndex; // @synthesize spatialIndex=_spatialIndex;
@property (nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;

- (void).cxx_destruct;
- (id)initWithNativeEncodedImage:(struct EncodedImage)arg1;
- (struct EncodedImage)nativeEncodedImage;

@end

