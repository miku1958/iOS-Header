//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPHistoryEntry-Protocol.h>

@class NSUUID;
@protocol GEOMapItem;

@protocol MSPHistoryEntryPlaceDisplay <MSPHistoryEntry>
- (id<GEOMapItem>)geoMapItem;
- (NSUUID *)supersededSearchStorageIdentifier;
@end

