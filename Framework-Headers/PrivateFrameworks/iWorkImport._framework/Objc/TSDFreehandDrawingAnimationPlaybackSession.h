//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDDynamicOverrideProvider-Protocol.h>

@class NSString, TSDFreehandDrawingAnimationPlaybackTiming, TSDFreehandDrawingInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingAnimationPlaybackSession : NSObject <TSDDynamicOverrideProvider>
{
    TSDFreehandDrawingInfo *_drawingInfo;
    TSDFreehandDrawingAnimationPlaybackTiming *_timing;
    BOOL _shouldParameterizeStrokes;
    double _progress;
    double _framesPerSecond;
    double _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) BOOL shouldParameterizeStrokes; // @synthesize shouldParameterizeStrokes=_shouldParameterizeStrokes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dynamicOverrideForLayout:(id)arg1;
- (id)dynamicOverrideForRep:(id)arg1;
- (id)initWithFreehandDrawingInfo:(id)arg1 duration:(double)arg2 framesPerSecond:(double)arg3;
- (void)p_updateShouldParameterizeStrokes;
- (double)visibilityOfChild:(id)arg1;

@end
