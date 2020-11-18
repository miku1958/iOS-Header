//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOFeatureStyleAttributes, NSArray;
@protocol VKCustomFeatureDataSourceObserver;

@protocol VKCustomFeatureDataSource <NSObject>
- (void)addObserver:(id<VKCustomFeatureDataSourceObserver>)arg1;
- (NSArray *)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (GEOFeatureStyleAttributes *)clusterStyleAttributes;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (BOOL)isClusteringEnabled;
- (void)removeObserver:(id<VKCustomFeatureDataSourceObserver>)arg1;
- (unsigned char)sceneID;
- (unsigned char)sceneState;
@end
