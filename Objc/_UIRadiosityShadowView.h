//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CALayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIRadiosityShadowView : UIView
{
    BOOL _needsPunchout;
    UIBezierPath *_shadowPath;
    CALayer *_punchoutLayer;
}

@property (nonatomic) BOOL needsPunchout; // @synthesize needsPunchout=_needsPunchout;
@property (strong, nonatomic) CALayer *punchoutLayer; // @synthesize punchoutLayer=_punchoutLayer;
@property (strong, nonatomic) UIBezierPath *shadowPath; // @synthesize shadowPath=_shadowPath;

- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 shadowPath:(id)arg2 isSoft:(BOOL)arg3;

@end

