//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableIndexSet, NSOrderedSet, SCNAuthoringEnvironment, SCNBillboardConstraint, SCNNode;

@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment *_authoringEnvironment;
    NSOrderedSet *_targets;
    SCNNode *_node;
    union C3DMatrix4x4 _xAxisToZAxisTransform;
    union C3DMatrix4x4 _yAxisToZAxisTransform;
    union C3DMatrix4x4 _xyPlaneToYZPlaneTransform;
    union C3DMatrix4x4 _xyPlaneToXZPlaneTransform;
    unsigned short _selectedAxis;
    union {
        struct {
            MISSING_TYPE *originalPosition__axisDirection__mouseDeltaVector;
        } axisMove;
        struct {
            MISSING_TYPE *originalPosition__planeNormal__pointInPlane__mouseDeltaVector;
        } planeMove;
        struct {
            float rotationSign;
            MISSING_TYPE *originalRotation;
        } axisRotate;
    } _actionData;
    BOOL _isMouseDown;
    BOOL _readonly;
    unsigned short _action;
    struct CGPoint _originalMouseLocation;
    struct {
        void *positions;
        void *orientations;
        struct SCNMatrix4 *originalLocalMatrix;
        void *scales;
    } _originalData;
    unsigned int _originalDataCount;
    union C3DMatrix4x4 _worldInitialMatrix;
    union C3DMatrix4x4 _worldMatrix;
    long long _snapToAlignCount;
    CDStruct_962da47d *_snapToAlignOnX;
    CDStruct_962da47d *_snapToAlignOnY;
    CDStruct_962da47d *_snapToAlignOnZ;
    NSMutableIndexSet *_snapXIndexes;
    NSMutableIndexSet *_snapYIndexes;
    NSMutableIndexSet *_snapZIndexes;
    long long _xAlignment;
    long long _yAlignment;
    long long _zAlignment;
    SCNNode *_planarTranslationHandleXY;
    SCNNode *_planarTranslationHandleYZ;
    SCNNode *_planarTranslationHandleXZ;
    SCNNode *_planarTranslationHandles;
    SCNNode *_axis;
    SCNNode *_arcHandleXY;
    SCNNode *_arcHandleYZ;
    SCNNode *_arcHandleXZ;
    SCNNode *_arcHandles;
    SCNNode *_scaleNode;
    SCNNode *_screenSpaceRotation;
    SCNNode *_highlightNode;
    MISSING_TYPE *_planarTranslationLayout;
    BOOL _layoutLocked;
    SCNNode *_zArrow;
    SCNNode *_rotationHandles;
    SCNNode *_occluder;
    SCNNode *_translateHandles;
    SCNBillboardConstraint *_billboard;
    NSOrderedSet *_cloneSet;
    BOOL _cloning;
    unsigned long long _features;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) unsigned long long features;
@property (readonly) SCNNode *manipulatorNode;
@property (nonatomic) BOOL readonly; // @synthesize readonly=_readonly;
@property (strong, nonatomic) SCNNode *target;
@property (strong, nonatomic) NSOrderedSet *targets;
@property (readonly) struct SCNMatrix4 transform;
@property (nonatomic) long long xAlignment; // @synthesize xAlignment=_xAlignment;
@property (nonatomic) long long yAlignment; // @synthesize yAlignment=_yAlignment;
@property (nonatomic) long long zAlignment; // @synthesize zAlignment=_zAlignment;

- (BOOL)_applyWithEvent:(CDStruct_8affffdd)arg1;
- (void)_deleteOriginalData;
- (void)_prepareSnapToAlignData:(unsigned short)arg1 minOffset:maxOffset: /* Error: Ran out of types for this method. */;
- (void)_saveOriginalData;
- (void)_setAuthoringEnvironment:(id)arg1;
- (MISSING_TYPE *)_snapPositionToAlign:(struct SCNVector3)arg1 original:(double)arg2 unit:(BOOL)arg3 axisMove:(BOOL *)arg4 rayStart:(long long *)arg5 rayDir:didSnap:snapIndexes: /* Error: Ran out of types for this method. */;
- (void)_updateActionWithEvent:(CDStruct_8affffdd)arg1;
- (void)_updateCloneStateWithEvent:(CDStruct_8affffdd)arg1;
- (void)addClonesToScene;
- (void)clearSnapIndexes;
- (id)copy;
- (void)dealloc;
- (void)editingSpaceChanged;
- (long long)effectiveEditingSpace;
- (id)hitTest:(CDStruct_8affffdd)arg1;
- (id)init;
- (BOOL)isDragging;
- (void)lockLayout;
- (BOOL)mouseDown:(CDStruct_8affffdd)arg1;
- (BOOL)mouseDragged:(CDStruct_8affffdd)arg1;
- (BOOL)mouseMoved:(CDStruct_8affffdd)arg1;
- (BOOL)mouseUp:(CDStruct_8affffdd)arg1;
- (void)prepareSnapToAlignData;
- (void)prepareSnapToAlignDataIfNeeded;
- (void)removeClonesFromScene;
- (id)scene;
- (id)setupClones;
- (void)setupNode;
- (id)snapGuideIndexesOnAxis:(unsigned long long)arg1;
- (const CDStruct_962da47d *)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2;
- (void)unhighlightSelectedNode;
- (void)unlockLayout;
- (void)updateItemsPosition;
- (void)updateItemsRotation: /* Error: Ran out of types for this method. */;
- (void)updateItemsScale:(float)arg1;
- (void)updateManipulatorComponents;
- (void)updateManipulatorNode;
- (void)updateManipulatorPosition:(struct __C3DEngineContext *)arg1;
- (void)validateClones;

@end

