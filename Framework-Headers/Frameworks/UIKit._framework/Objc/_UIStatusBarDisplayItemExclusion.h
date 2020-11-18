//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemExclusion : NSObject
{
    _UIStatusBarDisplayItemState *_itemState;
    _UIStatusBarDisplayItemPlacement *_placement;
}

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (strong, nonatomic) _UIStatusBarDisplayItemState *itemState; // @synthesize itemState=_itemState;
@property (strong, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;

+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;
- (void).cxx_destruct;
- (id)description;

@end
