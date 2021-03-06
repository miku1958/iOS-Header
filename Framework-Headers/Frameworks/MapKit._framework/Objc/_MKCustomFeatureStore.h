//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/VKCustomFeatureDataSource-Protocol.h>

@class GEOFeatureStyleAttributes, MKQuadTrie, NSHashTable, NSString;
@protocol MKCustomFeatureStoreDelegate;

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource>
{
    MKQuadTrie *_annotationsTrie;
    NSHashTable *_observers;
    BOOL _isClusteringEnabled;
    GEOFeatureStyleAttributes *_clusterStyleAttributes;
    NSString *_annotationText;
    NSString *_annotationLocale;
    unsigned char _sceneID;
    unsigned char _sceneState;
    id<MKCustomFeatureStoreDelegate> _delegate;
}

@property (copy, nonatomic) GEOFeatureStyleAttributes *clusterStyleAttributes; // @synthesize clusterStyleAttributes=_clusterStyleAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKCustomFeatureStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isClusteringEnabled; // @synthesize isClusteringEnabled=_isClusteringEnabled;
@property (nonatomic) unsigned char sceneID; // @synthesize sceneID=_sceneID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearAnnotations;
- (void)_invalidateRect:(CDStruct_02837cd9)arg1;
- (void)_setSceneState:(unsigned char)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allAnnotations;
- (unsigned long long)annotationCount;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (void)hideScene;
- (id)init;
- (id)initWithClustering:(BOOL)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned char)sceneState;
- (void)setAnnotations:(id)arg1;
- (void)setClusterAnnotationText:(id)arg1 locale:(id)arg2;
- (void)showScene;

@end

