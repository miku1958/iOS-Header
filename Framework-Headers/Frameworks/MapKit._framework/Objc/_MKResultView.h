//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>

@class CLLocation, MKLocationManager, MKMapItem, NSArray, NSMutableArray, NSString, NSTimer, UIColor, UIImageView, _MKUILabel;
@protocol _MKResultViewDelegate;

@interface _MKResultView : UIView <MKLocationManagerObserver>
{
    NSArray *_mapItems;
    CLLocation *_referenceLocation;
    BOOL _alwaysUsesBusinessLayout;
    int _layoutType;
    id<_MKResultViewDelegate> delegate;
    BOOL _selected;
    BOOL _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
    BOOL _useSpotlightVibrancy;
    int _iconFormat;
    _MKUILabel *_nameLabel;
    _MKUILabel *_secondaryLabel;
    _MKUILabel *_tertiaryLabel;
    id<_MKResultViewDelegate> _delegate;
    double _fallbackDistance;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    UIImageView *_imageView;
}

@property (nonatomic) BOOL alwaysUsesBusinessLayout; // @synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_MKResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fallbackDistance; // @synthesize fallbackDistance=_fallbackDistance;
@property (readonly) unsigned long long hash;
@property (nonatomic) int iconFormat; // @synthesize iconFormat=_iconFormat;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) MKMapItem *mapItem;
@property (strong, nonatomic) NSArray *mapItems;
@property (strong, nonatomic) _MKUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (readonly, nonatomic) double preferredHeight;
@property (strong, nonatomic) NSString *primaryLabelText;
@property (strong, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property (strong, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property (strong, nonatomic) _MKUILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (strong, nonatomic) NSString *secondaryLabelText;
@property (strong, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showsDistance;
@property (readonly) Class superclass;
@property (strong, nonatomic) _MKUILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property (nonatomic) BOOL useSpotlightVibrancy; // @synthesize useSpotlightVibrancy=_useSpotlightVibrancy;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_cancelReferenceLocationTimer;
- (void)_commonInit;
- (void)_contentSizeCategoryDidChange;
- (id)_defaultPrimaryLabel;
- (id)_defaultSecondaryCategoryLabel;
- (double)_expectedHeightForLabels;
- (void)_fireReferenceLocationTimer;
- (struct CGSize)_imageSize;
- (id)_labelWithFontSize:(double)arg1;
- (void)_locationApprovalDidChange;
- (unsigned long long)_maxNameLengthForEndingString:(id)arg1;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (void)_updateColors;
- (void)_updateFontSizing;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)_updatePrimaryColors;
- (void)_updateSecondaryColors;
- (void)addLabelIfNecessary:(id)arg1;
- (void)dealloc;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 highlightsOnTouch:(BOOL)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)updateImageView;
- (void)updateLayout;
- (void)updateSubviews;

@end

