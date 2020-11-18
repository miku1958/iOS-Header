//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CKTranscriptManagementView : UIView
{
    BOOL _suppressMapMovement;
    UIView *_mapView;
    UIView *_attachmentsCollectionView;
    UIView *_nameField;
    double _navigationBarTopInset;
    double _bottomPadding;
    double _scrollYOffset;
}

@property (strong, nonatomic) UIView *attachmentsCollectionView; // @synthesize attachmentsCollectionView=_attachmentsCollectionView;
@property (nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property (strong, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
@property (strong, nonatomic) UIView *nameField; // @synthesize nameField=_nameField;
@property (nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property (nonatomic) double scrollYOffset; // @synthesize scrollYOffset=_scrollYOffset;
@property (nonatomic) BOOL suppressMapMovement; // @synthesize suppressMapMovement=_suppressMapMovement;

- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (BOOL)layoutMarginsFollowReadableWidth;
- (void)layoutSubviews;

@end
