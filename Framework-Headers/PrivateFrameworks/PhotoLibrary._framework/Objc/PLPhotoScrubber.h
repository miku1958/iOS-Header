//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, NSTimer, UIImageView, UIView;
@protocol PLPhotoScrubberDataSource, PLPhotoScrubberSpeedDelegate;

@interface PLPhotoScrubber : UIControl
{
    id<PLPhotoScrubberDataSource> _dataSource;
    unsigned long long _displayedImageIndex;
    long long _prospectiveImageIndex;
    double _timeOfLastTouch;
    double _lastUpdate;
    UIView *_thumbnailTrackView;
    struct CGRect _thumbnailBounds;
    double _imagesPerViewRatio;
    NSMutableArray *_thumbnailViews;
    UIImageView *_loupeView;
    long long _loupeIndex;
    unsigned long long _imageCount;
    BOOL _scrubbing;
    BOOL _deferImageLoading;
    BOOL _loadImagesSynchronously;
    id<PLPhotoScrubberSpeedDelegate> _speedDelegate;
    double __scrubbingSpeed;
    long long __lastSpeedRegime;
    double __lastTime;
    NSTimer *__timeoutTimer;
}

@property (nonatomic, setter=_setLastSpeedRegime:) long long _lastSpeedRegime; // @synthesize _lastSpeedRegime=__lastSpeedRegime;
@property (nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property (nonatomic, setter=_setScrubbingSpeed:) double _scrubbingSpeed; // @synthesize _scrubbingSpeed=__scrubbingSpeed;
@property (strong, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property (nonatomic) id<PLPhotoScrubberDataSource> dataSource; // @dynamic dataSource;
@property (nonatomic) id<PLPhotoScrubberSpeedDelegate> speedDelegate; // @synthesize speedDelegate=_speedDelegate;

- (struct CGPoint)_centerForImageAtIndex:(long long)arg1;
- (void)_handleTimeoutTimer:(id)arg1;
- (unsigned long long)_imageIndexFromLocation:(struct CGPoint)arg1;
- (void)_performSpeedUpdate;
- (void)_rescheduleTimer;
- (void)_setDisplayedImageIndex:(id)arg1;
- (void)_setDisplayedImageIndex:(long long)arg1 immediately:(BOOL)arg2;
- (void)_setIsScrubbing:(BOOL)arg1;
- (void)_setSpeedRegime:(long long)arg1;
- (unsigned long long)_thumbnailIndexFromLocation:(struct CGPoint)arg1;
- (void)_updateLoupe:(BOOL)arg1 force:(BOOL)arg2;
- (void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(BOOL)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)didRotate;
- (long long)displayedImageIndex;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (BOOL)isFastScrubbing;
- (BOOL)isScrubbing;
- (void)layoutSubviews;
- (void)ppt_scrubToAbsoluteIndex:(long long)arg1 immediately:(BOOL)arg2;
- (void)ppt_setIsScrubbing:(BOOL)arg1;
- (void)reloadData;
- (void)reloadDataWithNewDisplayedIndex:(unsigned long long)arg1;
- (void)reloadImageAtIndex:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setDataSource:(id)arg1 reloadData:(BOOL)arg2;
- (void)setDeferImageLoading:(BOOL)arg1;
- (void)setDisplayedImageIndex:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;
- (void)setLoupeImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willRotate;

@end

