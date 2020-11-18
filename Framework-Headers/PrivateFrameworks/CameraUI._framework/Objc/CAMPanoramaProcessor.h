//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMPanoramaCaptureRequest, NSMutableDictionary;
@protocol CAMPanoramaProcessorDelegate;

@interface CAMPanoramaProcessor : NSObject
{
    BOOL _capturingPanorama;
    id<CAMPanoramaProcessorDelegate> _delegate;
    CAMPanoramaCaptureRequest *_request;
    long long _photoEncodingBehavior;
    long long _direction;
    NSMutableDictionary *__initialMetadataByRequestUUID;
    struct CGSize _previewSize;
}

@property (readonly, nonatomic) NSMutableDictionary *_initialMetadataByRequestUUID; // @synthesize _initialMetadataByRequestUUID=__initialMetadataByRequestUUID;
@property (nonatomic, getter=isCapturingPanorama, setter=_setCapturingPanorama:) BOOL capturingPanorama; // @synthesize capturingPanorama=_capturingPanorama;
@property (readonly, weak, nonatomic) id<CAMPanoramaProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long direction; // @synthesize direction=_direction;
@property (readonly, nonatomic) long long photoEncodingBehavior; // @synthesize photoEncodingBehavior=_photoEncodingBehavior;
@property (readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property (strong, nonatomic, setter=_setRequest:) CAMPanoramaCaptureRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 encodingBehavior:(long long)arg2;
- (void)invalidate;
- (void)processPanoramaCaptureWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)stopPanoramaCapture;

@end

