//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AXHALiveListenDelegate;

@interface AXHALiveListenController : NSObject
{
    BOOL _isListening;
    id<AXHALiveListenDelegate> _delegate;
    struct OpaqueAudioComponentInstance *_rioUnit;
    struct OpaqueAudioComponentInstance *_mixerUnit;
}

@property (weak, nonatomic) id<AXHALiveListenDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL isListening; // @synthesize isListening=_isListening;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance *mixerUnit; // @synthesize mixerUnit=_mixerUnit;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance *rioUnit; // @synthesize rioUnit=_rioUnit;

- (void).cxx_destruct;
- (float)audioLevel;
- (BOOL)startListeningWithError:(id *)arg1;
- (BOOL)stopListeningWithError:(id *)arg1;

@end

