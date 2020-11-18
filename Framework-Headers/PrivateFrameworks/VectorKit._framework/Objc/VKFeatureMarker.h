//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOFeatureStyleAttributes, NSString;

@interface VKFeatureMarker : NSObject
{
    shared_ptr_430519ce _actualFeatureMarker;
}

@property (readonly) const shared_ptr_430519ce *actualFeatureMarker;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned long long venueID;

+ (id)markerWithFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFeatureMarkerPtr:(const shared_ptr_430519ce *)arg1;

@end

