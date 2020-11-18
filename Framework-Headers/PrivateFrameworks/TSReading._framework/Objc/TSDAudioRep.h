//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaRep.h>

#import <TSReading/TSDAudioHUDControllerDelegate-Protocol.h>
#import <TSReading/TSKAVPlayerControllerDelegate-Protocol.h>

@class CALayer, NSString, TSDMovieInfo, TSKAVPlayerController;
@protocol TSDAudioHUDController;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate>
{
    TSKAVPlayerController *mPlayerController;
    CALayer *mPlayPauseButtonLayer;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
    id<TSDAudioHUDController> mAudioHUDController;
}

@property (readonly, nonatomic) id<TSDAudioHUDController> audioHUDController; // @synthesize audioHUDController=mAudioHUDController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) TSKAVPlayerController *playerController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume;

- (void)becameNotSelected;
- (void)becameSelected;
- (struct CGRect)boundsForStandardKnobs;
- (BOOL)canResetMediaSize;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (void)didEndZooming;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (BOOL)hitPlayPauseButtonWithPoint:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isDraggable;
- (Class)layerClass;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)p_isEditingAnimations;
- (BOOL)p_isPlaying;
- (void)p_setupPlayerControllerIfNecessary;
- (BOOL)p_shouldPlayerControllerExistThroughoutSelection;
- (BOOL)p_shouldShowPlayPauseLayers;
- (void)p_teardownPlayerController;
- (void)p_updateButtonForPlaying:(BOOL)arg1 pressed:(BOOL)arg2;
- (void)p_updateEndTime;
- (void)p_updateRepeatMode;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)processChangedProperty:(int)arg1;
- (BOOL)providesGuidesWhileAligning;
- (BOOL)shouldAllowReplacementFromDrop;
- (BOOL)shouldAllowReplacementFromPaste;
- (BOOL)shouldShowDragHUD;
- (BOOL)shouldShowKnobs;
- (BOOL)shouldShowMediaReplaceUI;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldShowSizesInRulers;
- (id)textureWithContext:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)updatePlayButtonForPoint:(struct CGPoint)arg1;
- (void)willBeRemoved;
- (void)willBeginReadMode;
- (void)willBeginZooming;
- (void)willUpdateLayer:(id)arg1;

@end
