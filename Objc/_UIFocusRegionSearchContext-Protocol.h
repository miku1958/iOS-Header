//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIFocusSystem, UIScreen, _UIFocusRegion;
@protocol UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

@protocol _UIFocusRegionSearchContext <NSObject>

@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) id<_UIFocusMapArea> searchArea;

- (void)addRegion:(_UIFocusRegion *)arg1;
- (void)addRegions:(NSArray *)arg1;
- (void)addRegionsInContainer:(id<_UIFocusRegionContainer>)arg1;
- (void)addRegionsInContainers:(NSArray *)arg1;
@end

