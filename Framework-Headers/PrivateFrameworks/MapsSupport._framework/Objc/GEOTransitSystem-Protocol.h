//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitArtworkDataSource;

@protocol GEOTransitSystem <NSObject>

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;

@end

