//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDropInteractionEffect-Protocol.h>

@class CAShapeLayer, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIDropInteractionHighlightEffect : NSObject <UIDropInteractionEffect>
{
    long long _visualState;
    double _highlightWidth;
    double _cornerRadius;
    double _highlightInset;
    UIColor *_highlightColor;
    CAShapeLayer *_shapeLayer;
}

@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (nonatomic) double highlightInset; // @synthesize highlightInset=_highlightInset;
@property (nonatomic) double highlightWidth; // @synthesize highlightWidth=_highlightWidth;
@property (strong, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect)clippingRectInView:(id)arg1 forView:(id)arg2;
- (void)dealloc;
- (struct CGRect)highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)removeShapeLayer;
- (id)updateShapeLayerForFrame:(struct CGRect)arg1 inView:(id)arg2;

@end
