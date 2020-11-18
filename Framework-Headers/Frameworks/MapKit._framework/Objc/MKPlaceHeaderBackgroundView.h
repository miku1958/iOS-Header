//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKPlaceHeaderViewCinematics-Protocol.h>

@class MKMapItem, NSString;
@protocol MKPlaceHeaderBackgroundViewDelegate;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics>
{
    long long _backgroundType;
    MKMapItem *_mapItem;
    id<MKPlaceHeaderBackgroundViewDelegate> _delegate;
    long long _preparationState;
}

@property (nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKPlaceHeaderBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (nonatomic) long long preparationState; // @synthesize preparationState=_preparationState;
@property (readonly) Class superclass;

+ (long long)backgroundTypeForMapItem:(id)arg1;
+ (id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3;
+ (id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2;
+ (Class)classForBackgroundType:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;
- (void)pause;
- (void)prepareForPresentation;
- (void)present;
- (void)reset;
- (void)resume;

@end
