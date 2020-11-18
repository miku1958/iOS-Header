//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXTrimScrubberLayoutHelper : NSObject
{
    BOOL _needsUpdate;
    double _filmstripScale;
    double _pivotAnchor;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _viewportFrame;
    struct UIEdgeInsets _horizontalTimelineInset;
    struct CGRect _filmstripFrame;
    struct CGRect _filmstripFrameInScrubberSpace;
    struct CGRect _visibleFrameInFilmstripSpace;
}

@property (nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) struct CGRect durationInsetFilmstripFrame;
@property (nonatomic) struct CGRect filmstripFrame; // @synthesize filmstripFrame=_filmstripFrame;
@property (nonatomic) struct CGRect filmstripFrameInScrubberSpace; // @synthesize filmstripFrameInScrubberSpace=_filmstripFrameInScrubberSpace;
@property (nonatomic) double filmstripScale; // @synthesize filmstripScale=_filmstripScale;
@property (nonatomic) struct UIEdgeInsets horizontalTimelineInset; // @synthesize horizontalTimelineInset=_horizontalTimelineInset;
@property (nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property (nonatomic) double pivotAnchor; // @synthesize pivotAnchor=_pivotAnchor;
@property (nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property (nonatomic) struct CGRect visibleFrameInFilmstripSpace; // @synthesize visibleFrameInFilmstripSpace=_visibleFrameInFilmstripSpace;

- (void)_updateIfNeeded;
- (id)init;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (CDStruct_1b6d18a9)timeForOffsetInScrubberSpace:(double)arg1;

@end
