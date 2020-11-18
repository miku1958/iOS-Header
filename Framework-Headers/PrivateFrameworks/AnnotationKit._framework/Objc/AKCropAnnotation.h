//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSString;

@interface AKCropAnnotation : AKAnnotation <AKRectangularAnnotationProtocol>
{
    BOOL _hidden;
    BOOL _cropApplied;
    BOOL _showHandles;
    struct CGColor *_color;
    struct CGRect _rectangle;
}

@property (nonatomic) struct CGColor *color; // @synthesize color=_color;
@property BOOL cropApplied; // @synthesize cropApplied=_cropApplied;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property BOOL showHandles; // @synthesize showHandles=_showHandles;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void)adjustModelToCompensateForOriginalExif;
- (void)dealloc;
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

