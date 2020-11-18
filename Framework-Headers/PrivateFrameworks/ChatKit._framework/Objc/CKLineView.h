//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CKLineView : UIView
{
    BOOL _shouldUseDarkFSMStrokeColor;
    CABackdropLayer *_backdropFilterLayer;
    CAShapeLayer *_lineShapeLayer;
}

@property (strong, nonatomic) CABackdropLayer *backdropFilterLayer; // @synthesize backdropFilterLayer=_backdropFilterLayer;
@property (strong, nonatomic) CAShapeLayer *lineShapeLayer; // @synthesize lineShapeLayer=_lineShapeLayer;
@property (nonatomic) BOOL shouldUseDarkFSMStrokeColor; // @synthesize shouldUseDarkFSMStrokeColor=_shouldUseDarkFSMStrokeColor;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)clearFilters;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
