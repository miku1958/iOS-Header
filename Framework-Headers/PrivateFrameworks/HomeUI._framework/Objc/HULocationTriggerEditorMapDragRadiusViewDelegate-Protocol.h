//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HULocationTriggerEditorMapDragRadiusView;
@protocol MKOverlay;

@protocol HULocationTriggerEditorMapDragRadiusViewDelegate
- (CDStruct_02837cd9)mapRadiusView:(HULocationTriggerEditorMapDragRadiusView *)arg1 boundingMapRectForOverlay:(id<MKOverlay>)arg2;
- (id<MKOverlay>)mapRadiusView:(HULocationTriggerEditorMapDragRadiusView *)arg1 overlayForRadius:(double)arg2;
- (void)mapRadiusView:(HULocationTriggerEditorMapDragRadiusView *)arg1 radiusDidChange:(double)arg2;
@end
