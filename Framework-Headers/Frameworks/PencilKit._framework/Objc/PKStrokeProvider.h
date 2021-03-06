//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeProvider-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString, PKDrawing;
@protocol CHStrokeProviderVersion;

@interface PKStrokeProvider : NSObject <CHStrokeProvider>
{
    BOOL _disabled;
    NSMutableOrderedSet *_strokeSlices;
    BOOL _shouldProcessVisibleStrokes;
    NSArray *_visibleOnscreenStrokes;
    NSMutableDictionary *_strokeIdsByEncoding;
    long long groupingPriority;
    PKDrawing *_drawing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property (readonly) struct CGSize drawingCanvasSize;
@property (readonly) long long groupingPriority; // @synthesize groupingPriority;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly, strong) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly) Class superclass;
@property (readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;

+ (id)_identifiersForStrokes:(id)arg1;
+ (id)slicesForStrokes:(id)arg1;
- (void).cxx_destruct;
- (void)_cacheStrokeIdentifier:(id)arg1 withEncodedStrokeIdentifier:(id)arg2;
- (id)_cachedStrokeIdentifier:(id)arg1;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (id)encodedStrokeIdentifier:(id)arg1;
- (BOOL)enumerateChangesSinceVersion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)initWithDrawing:(id)arg1 visibleOnscreenStrokes:(id)arg2 shouldProcessVisibleStrokes:(BOOL)arg3;
- (BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
- (id)sliceForIdentifier:(id)arg1;
- (id)slices;
- (id)strokeForIdentifier:(id)arg1;
- (id)strokeIdentifierFromData:(id)arg1;

@end

