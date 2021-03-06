//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHQueryDelegate-Protocol.h>
#import <PencilKit/NSCopying-Protocol.h>
#import <PencilKit/NSSecureCoding-Protocol.h>

@class CHRecognitionSession, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSUUID, PKRecognitionSessionManager, PKVectorTimestamp, PKVisualizationManager;

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying, NSSecureCoding>
{
    struct CGRect __canvasBounds;
    struct CGRect __bounds;
    struct shared_ptr<PKProtobufUnknownFields> _unknownFields;
    NSMutableArray *_visibleStrokes;
    NSMutableDictionary *_visibleStrokesIdentifierMap;
    BOOL _recognitionEnabled;
    NSArray *_forcedRecognitionLocales;
    NSUUID *_listenerID;
    NSUUID *_uuid;
    NSUUID *_replicaUUID;
    NSMutableArray *_allStrokes;
    PKRecognitionSessionManager *_recognitionManager;
    PKVectorTimestamp *_version;
    CHRecognitionSession *_recognitionSession;
    NSMapTable *_ongoingQueries;
    PKVisualizationManager *_visualizationManager;
    struct _PKStrokeID _boundsVersion;
}

@property (strong, nonatomic) NSMutableArray *_allStrokes; // @synthesize _allStrokes;
@property (readonly, nonatomic) BOOL _hasReplicaUUID;
@property (nonatomic) long long _orientation;
@property (readonly, nonatomic) struct CGRect bounds;
@property (nonatomic) struct _PKStrokeID boundsVersion; // @synthesize boundsVersion=_boundsVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMapTable *ongoingQueries; // @synthesize ongoingQueries=_ongoingQueries;
@property (strong, nonatomic) PKRecognitionSessionManager *recognitionManager; // @synthesize recognitionManager=_recognitionManager;
@property (strong, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property (readonly, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly) Class superclass;
@property (strong, nonatomic, setter=_setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) PKVectorTimestamp *version; // @synthesize version=_version;
@property (strong, nonatomic) PKVisualizationManager *visualizationManager; // @synthesize visualizationManager=_visualizationManager;

+ (struct CGRect)_boundingBoxForStrokeArray:(id)arg1;
+ (struct CGRect)_boundingBoxForStrokes:(id)arg1;
+ (long long)_currentSerializationVersion;
+ (id)_defaultConversionQueue;
+ (id)_findLeftmostStrokes:(id)arg1;
+ (id)_findRightmostStrokes:(id)arg1;
+ (struct CGAffineTransform)_orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (id)_otherStrokesCloseToLeft:(BOOL)arg1 forStrokes:(id)arg2 withClosestStroke:(id)arg3;
+ (id)_upgradeDrawingData:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)_uuidDescriptionForStrokes:(id)arg1;
+ (id)drawingWithData:(id)arg1;
+ (struct _PKStrokeID)newStrokeIDGreaterThan:(struct _PKStrokeID)arg1 forUUID:(id)arg2;
+ (void)sortStrokes:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)visibleStrokesFromStrokes:(id)arg1 inDrawing:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)CHDrawing;
- (id)_addStroke:(id)arg1;
- (void)_addTestDataToUnknownFields;
- (id)_ascii;
- (struct CGRect)_bounds;
- (struct CGRect)_canvasBounds;
- (id)_clipAgainstLegacyCanvas:(id)arg1;
- (id)_clipStroke:(id)arg1;
- (id)_clipStroke:(id)arg1 againstPaths:(const vector_acef39cc *)arg2;
- (double)_conversionScaleFactor;
- (id)_copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)_copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 ink:(id)arg3 newParent:(id *)arg4;
- (void)_copyAndAddStrokes:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)_data;
- (id)_dataInUnknownFields;
- (CDStruct_5f3a0cd7)_drawingStrokeInfoIsLegacyDrawing:(BOOL)arg1;
- (struct CGRect)_eraserStrokeBounds;
- (void)_imageInRect:(struct CGRect)arg1 scale:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithData:(id)arg1 loadNonInkingStrokes:(BOOL)arg2 error:(id *)arg3;
- (id)_initWithUnzippedData:(id)arg1 error:(id *)arg2;
- (id)_initWithUnzippedData:(id)arg1 loadNonInkingStrokes:(BOOL)arg2 error:(id *)arg3;
- (void)_mergeStroke:(id)arg1;
- (long long)_minimumSerializationVersion;
- (BOOL *)_newAsciiBitfield;
- (id)_newStroke:(id)arg1 withInk:(id)arg2;
- (struct CGSize)_orientedDrawingSize;
- (void)_removeHiddenAndEraserStrokes;
- (void)_removeInvisibleStrokes;
- (void)_removeStroke:(id)arg1;
- (id)_stroke:(id)arg1 transformed:(struct CGAffineTransform)arg2 concat:(BOOL)arg3;
- (id)_strokes;
- (id)_strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 transform:(struct CGAffineTransform)arg3;
- (void)_teardownRecognitionObjects;
- (void)_transformAllStrokes:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_transformForImageWithSize:(struct CGSize)arg1;
- (id)_unclippedStroke:(id)arg1;
- (struct CGSize)_unscaledOrientedDrawingSize;
- (void)_updateRecognitionSession;
- (void)_updateStrokes:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_upgradeLegacyPenInks;
- (id)_upgradeOnQueue:(id)arg1 isLegacyDrawing:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_visibleStrokeForIdentifier:(id)arg1;
- (id)_visibleStrokes;
- (id)_visibleStrokesIdentifierMap;
- (void)addNewStroke:(id)arg1;
- (struct CGRect)calculateStrokeBounds;
- (void)cancelOngoingRecognitionRequests;
- (BOOL)containsInternalStrokes;
- (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithoutInternalStrokes;
- (id)data;
- (id)dataRepresentation;
- (void)dealloc;
- (id)debugQuickLookObject;
- (void)didMergeWithDrawing:(id)arg1;
- (id)drawingByAppendingDrawing:(id)arg1;
- (id)drawingByAppendingStrokes:(id)arg1;
- (id)drawingByApplyingTransform:(struct CGAffineTransform)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchIntersectedStrokesBetweenPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2 visibleOnscreenStrokes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)forcedRecognitionLocales;
- (id)imageFromRect:(struct CGRect)arg1 scale:(double)arg2;
- (id)indexableContent;
- (id)init;
- (id)initWithArchive:(const struct Drawing *)arg1 loadNonInkingStrokes:(BOOL)arg2 error:(id *)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)initWithLegacyArchive:(const struct Drawing *)arg1;
- (id)initWithLegacyData:(id)arg1;
- (id)initWithStrokes:(id)arg1;
- (id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithV1Archive:(const Drawing_54c0d626 *)arg1 loadNonInkingStrokes:(BOOL)arg2;
- (id)initWithV1Data:(id)arg1 loadNonInkingStrokes:(BOOL)arg2;
- (id)insertNewTestStroke;
- (id)intersectedStrokesAtPoint:(struct CGPoint)arg1 selectionType:(long long)arg2 inputType:(long long)arg3 visibleOnscreenStrokes:(id)arg4;
- (id)intersectedStrokesFromStroke:(id)arg1 visibleOnscreenStrokes:(id)arg2;
- (void)invalidateStrokeBounds;
- (void)invalidateVisibleStrokes;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (struct _PKStrokeID)newStrokeIDGreaterThan:(struct _PKStrokeID)arg1;
- (void)performSearchQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)queryDidUpdateResult:(id)arg1;
- (BOOL)recognitionEnabled;
- (void)saveToArchive:(struct Drawing *)arg1 withPathData:(BOOL)arg2;
- (unsigned int)saveToV1Archive:(Drawing_54c0d626 *)arg1 withPathData:(BOOL)arg2;
- (id)serialize;
- (id)serializeTransiently;
- (id)serializeWithVersion:(long long)arg1;
- (void)setForcedRecognitionLocales:(id)arg1;
- (void)setNeedsRecognitionUpdate;
- (void)setRecognitionEnabled:(BOOL)arg1;
- (id)setStroke:(id)arg1 hidden:(BOOL)arg2;
- (id)setStroke:(id)arg1 ink:(id)arg2;
- (id)setStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 concat:(BOOL)arg3;
- (void)setStrokeSortIDForInsertion:(id)arg1;
- (void)setStrokeSubstrokes:(id)arg1;
- (void)setStrokes:(id)arg1 hidden:(BOOL)arg2;
- (void)setStrokes:(id)arg1 inks:(id)arg2;
- (void)setStrokes:(id)arg1 transform:(struct CGAffineTransform)arg2 concat:(BOOL)arg3;
- (void)set_canvasBounds:(struct CGRect)arg1;
- (id)sliceWithEraseStroke:(id)arg1;
- (void)sortStrokes;
- (struct CGRect)strokeBounds;
- (struct _PKStrokeID)strokeVersionForUpdatedStroke:(id)arg1;
- (id)strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 minThreshold:(double)arg3 transform:(struct CGAffineTransform)arg4 onscreenVisibleStrokes:(id)arg5;
- (id)strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 onscreenVisibleStrokes:(id)arg3;
- (id)updateStroke:(id)arg1 updater:(CDUnknownBlockType)arg2;
- (void)updateStrokes:(CDUnknownBlockType)arg1;
- (id)v1SerializeWithPathData:(BOOL)arg1;
- (id)v1SerializeWithPathData:(BOOL)arg1 toVersion:(unsigned int *)arg2;
- (id)visibleStrokeForInsertingStroke:(id)arg1;
- (id)visibleStrokeForInsertingStroke:(id)arg1 ink:(id)arg2;
- (id)visibleStrokeForInsertingStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 ink:(id)arg3;
- (id)visibleStrokes;
- (void)willMergeWithDrawing:(id)arg1;

@end

