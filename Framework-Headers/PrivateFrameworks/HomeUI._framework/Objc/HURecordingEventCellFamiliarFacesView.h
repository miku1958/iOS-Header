//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HFCameraImageObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, UILabel;

@interface HURecordingEventCellFamiliarFacesView : UIView <HFCameraImageObserver>
{
    UILabel *_titleLabel;
    UIView *_pointerView;
    NSLayoutConstraint *_leftTitleConstraint;
    double _maxWidthForNames;
    NSArray *_imageViews;
    NSArray *_sortedPeople;
}

@property (readonly, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property (strong, nonatomic) NSLayoutConstraint *leftTitleConstraint; // @synthesize leftTitleConstraint=_leftTitleConstraint;
@property (nonatomic) double maxWidthForNames; // @synthesize maxWidthForNames=_maxWidthForNames;
@property (strong, nonatomic) UIView *pointerView; // @synthesize pointerView=_pointerView;
@property (strong, nonatomic) NSArray *sortedPeople; // @synthesize sortedPeople=_sortedPeople;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)faceCropImageView;
+ (id)placeholderImage;
- (void).cxx_destruct;
- (id)faceCropImageViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)manager:(id)arg1 didFindFaceCrop:(id)arg2 forClip:(id)arg3 usingPersonName:(id)arg4;
- (void)manager:(id)arg1 failedToFindFaceCropForPersonName:(id)arg2;
- (void)resizeWithMaxWidth:(double)arg1;
- (void)updateTitleLabel;
- (void)updateWithPersonEvents:(id)arg1 forCameraClip:(id)arg2;

@end

