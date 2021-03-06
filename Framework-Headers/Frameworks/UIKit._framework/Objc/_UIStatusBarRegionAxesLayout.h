//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarRegionLayout-Protocol.h>

@class NSArray, NSString, _UIStatusBarRegion;
@protocol _UIStatusBarRegionAxisLayout;

@interface _UIStatusBarRegionAxesLayout : NSObject <_UIStatusBarRegionLayout>
{
    _UIStatusBarRegion *_region;
    NSArray *_displayItems;
    id<_UIStatusBarRegionAxisLayout> _horizontalLayout;
    id<_UIStatusBarRegionAxisLayout> _verticalLayout;
    NSArray *_horizontalConstraints;
    NSArray *_verticalConstraints;
    NSArray *_layoutGuides;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property (readonly, nonatomic) BOOL fitsAllItems;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property (strong, nonatomic) id<_UIStatusBarRegionAxisLayout> horizontalLayout; // @synthesize horizontalLayout=_horizontalLayout;
@property (copy, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property (weak, nonatomic) _UIStatusBarRegion *region; // @synthesize region=_region;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property (strong, nonatomic) id<_UIStatusBarRegionAxisLayout> verticalLayout; // @synthesize verticalLayout=_verticalLayout;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)invalidate;
- (BOOL)mayFitDisplayItems:(id)arg1;

@end

