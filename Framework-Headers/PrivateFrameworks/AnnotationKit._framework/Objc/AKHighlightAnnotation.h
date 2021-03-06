//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKParentAnnotationProtocol-Protocol.h>

@class NSArray, NSString, UIColor;

@interface AKHighlightAnnotation : AKAnnotation <AKParentAnnotationProtocol>
{
    unsigned long long _style;
    UIColor *_color;
    NSArray *_quadPoints;
}

@property (weak) AKAnnotation *childAnnotation;
@property (strong) UIColor *color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSArray *quadPoints; // @synthesize quadPoints=_quadPoints;
@property unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (struct CGRect)hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)translateBy:(struct CGPoint)arg1;

@end

