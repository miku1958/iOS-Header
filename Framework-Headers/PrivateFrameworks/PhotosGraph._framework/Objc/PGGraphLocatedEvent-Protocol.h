//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphEvent-Protocol.h>

@class NSSet;

@protocol PGGraphLocatedEvent <PGGraphEvent>

@property (readonly) BOOL happensPartiallyAtMyHome;
@property (readonly) BOOL happensPartiallyAtMyWork;
@property (readonly) BOOL hasLocation;

- (NSSet *)addressNodes;
- (NSSet *)poiNodes;
- (NSSet *)roiNodes;
@end

