//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/CHVisualizationManagerDelegate-Protocol.h>

@class CHVisualizationManager, NSString;

@interface PKRecognitionOverlayView : UIView <CHVisualizationManagerDelegate>
{
    CHVisualizationManager *_visualizationManager;
    struct CGAffineTransform _drawingTransform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGAffineTransform drawingTransform; // @synthesize drawingTransform=_drawingTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CHVisualizationManager *visualizationManager; // @synthesize visualizationManager=_visualizationManager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 visualizationManager:(id)arg2;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (void)visualizationManagerNeedsDisplay:(id)arg1;

@end

