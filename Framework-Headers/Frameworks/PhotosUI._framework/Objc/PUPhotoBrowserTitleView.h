//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDate, NSDateComponentsFormatter, NSString, PLDateRangeFormatter, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoBrowserTitleView : UIView
{
    BOOL __isPerformingChanges;
    BOOL __isUpdating;
    BOOL __needsUpdateDayAndTimeDescriptions;
    BOOL __needsUpdatePlayClockDescription;
    BOOL __needsUpdateLabels;
    BOOL __needsUpdateConstraints;
    BOOL __needsUpdateSize;
    BOOL __isSecondaryLabelVisible;
    long long _verticalSizeClass;
    NSString *_geoDescription;
    NSDate *_creationDate;
    UIColor *_textColor;
    PLDateRangeFormatter *__dayFormatter;
    PLDateRangeFormatter *__timeFormatter;
    NSDateComponentsFormatter *__playClockFormatter;
    NSString *__dayDescription;
    NSString *__timeDescription;
    NSString *__playClockDescription;
    UILabel *__primaryLabel;
    UILabel *__secondaryLabel;
    NSArray *__constraints;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property (strong, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property (strong, nonatomic, setter=_setDayDescription:) NSString *_dayDescription; // @synthesize _dayDescription=__dayDescription;
@property (readonly, nonatomic) PLDateRangeFormatter *_dayFormatter; // @synthesize _dayFormatter=__dayFormatter;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property (nonatomic, setter=_setSecondaryLabelVisible:) BOOL _isSecondaryLabelVisible; // @synthesize _isSecondaryLabelVisible=__isSecondaryLabelVisible;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property (nonatomic, setter=_setNeedsUpdateConstraints:) BOOL _needsUpdateConstraints; // @synthesize _needsUpdateConstraints=__needsUpdateConstraints;
@property (nonatomic, setter=_setNeedsUpdateDayAndTimeDescriptions:) BOOL _needsUpdateDayAndTimeDescriptions; // @synthesize _needsUpdateDayAndTimeDescriptions=__needsUpdateDayAndTimeDescriptions;
@property (nonatomic, setter=_setNeedsUpdateLabels:) BOOL _needsUpdateLabels; // @synthesize _needsUpdateLabels=__needsUpdateLabels;
@property (nonatomic, setter=_setNeedsUpdatePlayClockDescription:) BOOL _needsUpdatePlayClockDescription; // @synthesize _needsUpdatePlayClockDescription=__needsUpdatePlayClockDescription;
@property (nonatomic, setter=_setNeedsUpdateSize:) BOOL _needsUpdateSize; // @synthesize _needsUpdateSize=__needsUpdateSize;
@property (strong, nonatomic, setter=_setPlayClockDescription:) NSString *_playClockDescription; // @synthesize _playClockDescription=__playClockDescription;
@property (readonly, nonatomic) NSDateComponentsFormatter *_playClockFormatter; // @synthesize _playClockFormatter=__playClockFormatter;
@property (readonly, nonatomic) UILabel *_primaryLabel; // @synthesize _primaryLabel=__primaryLabel;
@property (readonly, nonatomic) UILabel *_secondaryLabel; // @synthesize _secondaryLabel=__secondaryLabel;
@property (strong, nonatomic, setter=_setTimeDescription:) NSString *_timeDescription; // @synthesize _timeDescription=__timeDescription;
@property (readonly, nonatomic) PLDateRangeFormatter *_timeFormatter; // @synthesize _timeFormatter=__timeFormatter;
@property (strong, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (nonatomic) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property (strong, nonatomic) NSString *geoDescription; // @synthesize geoDescription=_geoDescription;
@property (nonatomic) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_dateFormatterChanged:(id)arg1;
- (void)_invalidateConstraints;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_invalidateLabels;
- (void)_invalidatePlayClockDescription;
- (void)_invalidateSize;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateConstraintsIfNeeded;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLabelsIfNeeded;
- (void)_updatePlayClockDescriptionIfNeeded;
- (void)_updateSizeIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)updateConstraints;

@end
