//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class GEOMapItemStorage, GEOPDPlace, _INPBValueMetadata;

@protocol _INPBLocationValue <NSObject>

@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (strong, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (strong, nonatomic) GEOPDPlace *place;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata;

@end

