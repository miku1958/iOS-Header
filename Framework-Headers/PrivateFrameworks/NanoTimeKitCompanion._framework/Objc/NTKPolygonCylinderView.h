//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSString, _NTKPolygonCylinderTransformView;

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView>
{
    _NTKPolygonCylinderTransformView *_transformView;
    double _rotationAngle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfSides;
@property (readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_informFaceViewsOfRotation;
- (double)_rotationAngleForFaceIndex:(long long)arg1;
- (void)_setRotationAngle:(double)arg1;
- (void)_updateTransform;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;

@end

