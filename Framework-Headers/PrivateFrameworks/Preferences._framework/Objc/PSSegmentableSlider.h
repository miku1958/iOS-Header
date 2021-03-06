//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIColor, UISelectionFeedbackGenerator;

@interface PSSegmentableSlider : UISlider
{
    UIColor *_trackMarkersColor;
    BOOL _segmented;
    BOOL _locksToSegment;
    BOOL _snapsToSegment;
    unsigned long long _segmentCount;
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

@property (strong, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property (nonatomic) BOOL locksToSegment; // @synthesize locksToSegment=_locksToSegment;
@property (nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
@property (nonatomic, getter=isSegmented) BOOL segmented; // @synthesize segmented=_segmented;
@property (nonatomic) BOOL snapsToSegment; // @synthesize snapsToSegment=_snapsToSegment;

- (void).cxx_destruct;
- (void)controlInteractionBegan:(id)arg1;
- (void)controlInteractionEnded:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)sliderTapped:(id)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;

@end

