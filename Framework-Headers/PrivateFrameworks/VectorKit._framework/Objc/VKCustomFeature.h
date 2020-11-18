//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject
{
    shared_ptr_e9082761 _feature;
    id<VKCustomFeatureDataSource> _dataSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initInternalFeatureWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)_initWithCoordinate:(CDStruct_c3b9c2ee)arg1 isInjected:(BOOL)arg2;
- (unsigned long long)businessID;
- (id)dataSource;
- (shared_ptr_e9082761 *)feature;
- (unsigned long long)featureID;
- (id)init;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isInjectedFeature;
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFeatureID:(unsigned long long)arg1;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (void)setSortKey:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setText:(id)arg1 locale:(id)arg2;
- (id)styleAttributes;

@end
