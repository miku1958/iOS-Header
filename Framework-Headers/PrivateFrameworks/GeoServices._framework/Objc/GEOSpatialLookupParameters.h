//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface GEOSpatialLookupParameters : NSObject
{
    CDStruct_2c43369c _coordinate;
    double _radius;
    NSArray *_categories;
}

@property (readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;

- (void)dealloc;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3;

@end

