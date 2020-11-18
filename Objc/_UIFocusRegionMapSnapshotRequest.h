//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapSnapshotRequest : NSObject
{
    BOOL _includeFocusGuides;
    BOOL _includeFocusContainerGuides;
    BOOL _clipToSnapshotRect;
    UIView *_rootView;
    unsigned long long _focusHeading;
    UIView *_focusableRegionAncestorView;
    struct CGRect _snapshotRect;
    struct CGRect _viewSearchRect;
    struct CGRect _focusedRect;
    struct CGRect _visualRepresentationMinimumArea;
}

@property (nonatomic) BOOL clipToSnapshotRect; // @synthesize clipToSnapshotRect=_clipToSnapshotRect;
@property (nonatomic) unsigned long long focusHeading; // @synthesize focusHeading=_focusHeading;
@property (weak, nonatomic) UIView *focusableRegionAncestorView; // @synthesize focusableRegionAncestorView=_focusableRegionAncestorView;
@property (nonatomic) struct CGRect focusedRect; // @synthesize focusedRect=_focusedRect;
@property (nonatomic) BOOL includeFocusContainerGuides; // @synthesize includeFocusContainerGuides=_includeFocusContainerGuides;
@property (nonatomic) BOOL includeFocusGuides; // @synthesize includeFocusGuides=_includeFocusGuides;
@property (weak, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property (nonatomic) struct CGRect snapshotRect; // @synthesize snapshotRect=_snapshotRect;
@property (nonatomic) struct CGRect viewSearchRect; // @synthesize viewSearchRect=_viewSearchRect;
@property (nonatomic) struct CGRect visualRepresentationMinimumArea; // @synthesize visualRepresentationMinimumArea=_visualRepresentationMinimumArea;

+ (id)requestWithRootView:(id)arg1;
- (void).cxx_destruct;
- (id)initWithRootView:(id)arg1;
- (id)takeSnapshot;

@end

