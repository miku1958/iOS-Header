//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKMapItem, MKMuninContainerBadgeView, UIActivityIndicatorView, UIColor;
@protocol MKMuninContainerViewDelegate, NSObject;

@interface MKMuninContainerView : UIView
{
    UIColor *_dimmingViewBackgroundColorBlackOpaque;
    UIColor *_dimmingViewBackgroundColorBlackTranslucent;
    UIColor *_dimmingViewBackgroundColorClear;
    UIColor *_dimmingViewBackgroundColorPhotosOpaque;
    BOOL _photosDimmingStyle;
    BOOL _pipDimmingStyle;
    id<MKMuninContainerViewDelegate> _delegate;
    MKMapItem *_mapItem;
    unsigned long long _dimmingState;
    MKMuninContainerBadgeView *_badgeView;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_dimmingView;
    id<NSObject> _muninViewDidBecomeAdequatelyDrawnObserver;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (strong, nonatomic) MKMuninContainerBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property (weak, nonatomic) id<MKMuninContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long dimmingState; // @synthesize dimmingState=_dimmingState;
@property (strong, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorPhotosOpaque;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (strong, nonatomic) id<NSObject> muninViewDidBecomeAdequatelyDrawnObserver; // @synthesize muninViewDidBecomeAdequatelyDrawnObserver=_muninViewDidBecomeAdequatelyDrawnObserver;
@property (nonatomic) BOOL photosDimmingStyle; // @synthesize photosDimmingStyle=_photosDimmingStyle;
@property (nonatomic) BOOL pipDimmingStyle; // @synthesize pipDimmingStyle=_pipDimmingStyle;

- (void).cxx_destruct;
- (void)_commonInitWithMuninView:(id)arg1;
- (void)_setDimmingViewHidden:(BOOL)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_updateDimmingStateForMuninView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDimmingViewActivityIndicator;
- (void)_updateDimmingViewBackgroundColor;
- (void)cancelIfPresent;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)infoCardThemeChanged;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMuninView:(id)arg1;
- (id)initWithPhotosDimmingStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (id)muninViewIfPresent;
- (void)setBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDimmingState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setMapItem:(id)arg1 wantsCloseUpView:(BOOL)arg2;

@end
