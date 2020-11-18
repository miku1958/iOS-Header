//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class EKTextViewWithLabelTextMetrics, NSMutableArray, NSObject, UIButton, UIImage, UIImageView, UILabel;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell
{
    UILabel *_titleView;
    EKTextViewWithLabelTextMetrics *_locationView;
    UIImage *_locationStatusImage;
    UIImageView *_locationStatusView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
    BOOL _hasLocationStatus;
    long long _locationStatus;
    NSObject<EKEventDetailTitleCellDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate; // @synthesize delegate=_delegate;

+ (void)_geocodeEventIfNeeded:(id)arg1;
+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;
+ (id)_locationFont;
+ (id)_locationStringForStructuredLocation:(id)arg1;
+ (id)_mapsURLForLocationOnEvent:(id)arg1;
+ (void)_registerForInvalidation;
+ (id)_titleFont;
- (void).cxx_destruct;
- (id)_dateTimeViewForLine:(unsigned long long)arg1;
- (id)_editButton;
- (id)_locationStatusView;
- (id)_locationView;
- (id)_recurrenceView;
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;
- (id)_statusView;
- (id)_titleView;
- (id)_travelTimeView;
- (BOOL)_useLargeFonts;
- (void)dealloc;
- (void)editButtonTapped;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)setColor:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (BOOL)update;

@end

