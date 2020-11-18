//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUTilingViewSettings : PXSettings
{
    BOOL _useSpringAnimations;
    BOOL _useSystemSpringAnimations;
    BOOL _useOvershootingSpringAnimations;
    BOOL _allowPaging;
    BOOL _allowPreheating;
    BOOL _allowTileReuse;
    BOOL _allowsEdgeAntialiasing;
    BOOL _carryOverVelocities;
    BOOL _tintTiles;
    BOOL _showVisibleRects;
    BOOL _rotateDisappearingTiles;
    BOOL _showSnapshottableTiles;
    double _animationDragCoefficient;
    double _springAnimationDuration;
    double _defaultAnimationDuration;
    double _transitionDuration;
    long long _transitionProgressBehavior;
    double _interactiveTransitionBackgroundDimming;
    double _transitionChromeDelay;
}

@property (nonatomic) BOOL allowPaging; // @synthesize allowPaging=_allowPaging;
@property (nonatomic) BOOL allowPreheating; // @synthesize allowPreheating=_allowPreheating;
@property (nonatomic) BOOL allowTileReuse; // @synthesize allowTileReuse=_allowTileReuse;
@property (nonatomic) BOOL allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property (nonatomic) double animationDragCoefficient; // @synthesize animationDragCoefficient=_animationDragCoefficient;
@property (nonatomic) BOOL carryOverVelocities; // @synthesize carryOverVelocities=_carryOverVelocities;
@property (nonatomic) double defaultAnimationDuration; // @synthesize defaultAnimationDuration=_defaultAnimationDuration;
@property (nonatomic) double interactiveTransitionBackgroundDimming; // @synthesize interactiveTransitionBackgroundDimming=_interactiveTransitionBackgroundDimming;
@property (nonatomic) BOOL rotateDisappearingTiles; // @synthesize rotateDisappearingTiles=_rotateDisappearingTiles;
@property (nonatomic) BOOL showSnapshottableTiles; // @synthesize showSnapshottableTiles=_showSnapshottableTiles;
@property (nonatomic) BOOL showVisibleRects; // @synthesize showVisibleRects=_showVisibleRects;
@property (nonatomic) double springAnimationDuration; // @synthesize springAnimationDuration=_springAnimationDuration;
@property (nonatomic) BOOL tintTiles; // @synthesize tintTiles=_tintTiles;
@property (nonatomic) double transitionChromeDelay; // @synthesize transitionChromeDelay=_transitionChromeDelay;
@property (nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property (nonatomic) long long transitionProgressBehavior; // @synthesize transitionProgressBehavior=_transitionProgressBehavior;
@property (nonatomic) BOOL useOvershootingSpringAnimations; // @synthesize useOvershootingSpringAnimations=_useOvershootingSpringAnimations;
@property (nonatomic) BOOL useSpringAnimations; // @synthesize useSpringAnimations=_useSpringAnimations;
@property (nonatomic) BOOL useSystemSpringAnimations; // @synthesize useSystemSpringAnimations=_useSystemSpringAnimations;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

