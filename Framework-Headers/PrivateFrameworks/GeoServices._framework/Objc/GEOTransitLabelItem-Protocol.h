//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitArtworkDataSource;

@protocol GEOTransitLabelItem <NSObject>

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> labelArtwork;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) unsigned long long type;

@end

