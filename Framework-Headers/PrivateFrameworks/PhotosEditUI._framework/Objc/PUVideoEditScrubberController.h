//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosEditUI/PLSlalomRegionEditorDelegate-Protocol.h>
#import <PhotosEditUI/UIMovieScrubberDataSource-Protocol.h>
#import <PhotosEditUI/UIMovieScrubberDelegate-Protocol.h>

@class NSString, PLSlalomRegionEditor, PUVideoEditScrubberImageSource, UIMovieScrubber, UIView;
@protocol PUVideoEditScrubberControllerDelegate;

@interface PUVideoEditScrubberController : NSObject <UIMovieScrubberDataSource, UIMovieScrubberDelegate, PLSlalomRegionEditorDelegate>
{
    struct {
        BOOL respondsToDidBeginScrubbing;
        BOOL respondsToDidEndScrubbing;
        BOOL respondsToValueDidChange;
        BOOL respondsToStartDidChange;
        BOOL respondsToEndDidChange;
        BOOL respondsToDidBeginEditingSlomoRegions;
        BOOL respondsToDidEndEditingSlomoRegions;
        BOOL respondsToSlomoRegionsDidChangewithHandle;
    } _delegateFlags;
    BOOL _showsSlomoRegionEditor;
    double _videoDuration;
    double _videoAspectRatio;
    PUVideoEditScrubberImageSource *_thumbnailSource;
    id<PUVideoEditScrubberControllerDelegate> _delegate;
    double _edgeInset;
    UIMovieScrubber *_movieScrubber;
    UIView *_scrubberView;
    PLSlalomRegionEditor *__slomoRegionEditor;
}

@property (strong, nonatomic, setter=_setSlomoRegionEditor:) PLSlalomRegionEditor *_slomoRegionEditor; // @synthesize _slomoRegionEditor=__slomoRegionEditor;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUVideoEditScrubberControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEditing;
@property (strong, nonatomic) UIMovieScrubber *movieScrubber; // @synthesize movieScrubber=_movieScrubber;
@property (strong, nonatomic, setter=_setScrubberView:) UIView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property (nonatomic) BOOL showsSlomoRegionEditor; // @synthesize showsSlomoRegionEditor=_showsSlomoRegionEditor;
@property (nonatomic) double slomoEndTime;
@property (nonatomic) double slomoMaxTime;
@property (nonatomic) double slomoMinTime;
@property (nonatomic) double slomoStartTime;
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbIsVisible;
@property (strong, nonatomic) PUVideoEditScrubberImageSource *thumbnailSource; // @synthesize thumbnailSource=_thumbnailSource;
@property (nonatomic) double trimEndTime;
@property (nonatomic) double trimStartTime;
@property (readonly, nonatomic) double videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property (readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;

- (void).cxx_destruct;
- (void)_createView;
- (void)_updateSlomoRegionEditor;
- (void)dealloc;
- (id)initWithVideoDuration:(double)arg1 videoAspectRatio:(double)arg2;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)reloadData;
- (void)setCurrentTime:(double)arg1 animated:(BOOL)arg2;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (BOOL)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;

@end
