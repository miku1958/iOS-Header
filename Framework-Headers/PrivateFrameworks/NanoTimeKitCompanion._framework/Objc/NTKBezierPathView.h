//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CAAnimationDelegate-Protocol.h>

@class NSString, NTKBezierPathPointModel, UIBezierPath, UIColor;

@interface NTKBezierPathView : UIView <CAAnimationDelegate>
{
    UIBezierPath *_path;
    UIBezierPath *_animateToPath;
    NTKBezierPathPointModel *_pointModel;
    UIColor *_pathColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property (strong, nonatomic) UIColor *pathColor; // @synthesize pathColor=_pathColor;
@property (readonly, nonatomic) NTKBezierPathPointModel *pointModel; // @synthesize pointModel=_pointModel;
@property (readonly) Class superclass;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_shapeLayer;
- (void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1;

@end

