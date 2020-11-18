//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSError, NSURL;

@interface CAMVideoCaptureResult : NSObject
{
    BOOL _finalReferenceVideo;
    NSURL *_localDestinationURL;
    NSURL *_masterVideoURL;
    NSArray *_metadata;
    double _videoZoomFactor;
    long long _reason;
    NSDate *_captureDate;
    NSError *_error;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property (readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic, getter=isFinalReferenceVideo) BOOL finalReferenceVideo; // @synthesize finalReferenceVideo=_finalReferenceVideo;
@property (readonly, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
@property (readonly, nonatomic) NSURL *masterVideoURL; // @synthesize masterVideoURL=_masterVideoURL;
@property (readonly, copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property (readonly, nonatomic) double videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)arg1 masterVideoURL:(id)arg2 isFinalReferenceVideo:(BOOL)arg3 duration:(CDStruct_1b6d18a9)arg4 stillDisplayTime:(CDStruct_1b6d18a9)arg5 metadata:(id)arg6 videoZoomFactor:(double)arg7 reason:(long long)arg8 videoPreviewSurface:(void *)arg9 error:(id)arg10;

@end

