//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableFavorite.h>

#import <MapsSupport/MSPFavoritePlace-Protocol.h>

@class NSString, NSUUID;
@protocol GEOMapItem;

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>
{
}

@property (nonatomic) struct CLLocationCoordinate2D coordinateOfDroppedPin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<GEOMapItem> geoMapItem;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;

@end
