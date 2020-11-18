//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKFilledAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKParentAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSString, UIColor;

@interface AKNoteAnnotation : AKAnnotation <AKParentAnnotationProtocol, AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol>
{
    UIColor *_fillColor;
    AKAnnotation *_childAnnotation;
    NSString *_contents;
    struct CGRect _rectangle;
}

@property (weak) AKAnnotation *childAnnotation; // @synthesize childAnnotation=_childAnnotation;
@property (copy) NSString *contents; // @synthesize contents=_contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (readonly) unsigned long long hash;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
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

