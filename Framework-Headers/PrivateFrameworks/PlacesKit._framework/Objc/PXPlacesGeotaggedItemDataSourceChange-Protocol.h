//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSSet;
@protocol PXPlacesGeotaggedItemDataSourceChange;

@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>

@property (readonly) NSSet *addedItems;
@property (readonly) NSSet *removedItems;
@property (readonly) NSSet *updatedItems;

- (BOOL)hasChanges;
- (void)updateWithChange:(id<PXPlacesGeotaggedItemDataSourceChange>)arg1;
@end

