//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKShapeAnnotation.h>

#import <AnnotationKit/AKTextAnnotationProtocol-Protocol.h>

@class NSDictionary, NSString, NSTextStorage;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol>
{
    unsigned long long _arrowHeadStyle;
    NSTextStorage *_annotationText;
    NSDictionary *_typingAttributes;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    struct CGPoint _midPoint;
}

@property (strong) NSTextStorage *annotationText; // @synthesize annotationText=_annotationText;
@property unsigned long long arrowHeadStyle; // @synthesize arrowHeadStyle=_arrowHeadStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property (readonly) unsigned long long hash;
@property BOOL isEditingText;
@property struct CGPoint midPoint; // @synthesize midPoint=_midPoint;
@property BOOL shouldUsePlaceholderText;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property (readonly) Class superclass;
@property BOOL textIsClipped;
@property BOOL textIsFixedHeight;
@property BOOL textIsFixedWidth;
@property (copy) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (struct CGRect)hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)translateBy:(struct CGPoint)arg1;

@end

