//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@class NSString, UIBezierPath;

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>
{
    BOOL _verticallyFlipped;
    BOOL _horizontallyFlipped;
    UIBezierPath *_path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property (strong) UIBezierPath *path; // @synthesize path=_path;
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;

@end

