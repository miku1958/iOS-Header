//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface MKLocalSearchResponse : NSObject
{
    NSArray *_mapItems;
    CDStruct_b7cb895d _boundingRegion;
}

@property (readonly, nonatomic) CDStruct_b7cb895d boundingRegion; // @synthesize boundingRegion=_boundingRegion;
@property (readonly, nonatomic) NSArray *mapItems; // @synthesize mapItems=_mapItems;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2;
- (id)description;

@end

