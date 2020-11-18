//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocationCoordinates-Protocol.h>
#import <PhotosGraph/PGGraphLocationNaming-Protocol.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates>
{
    struct CLLocationCoordinate2D _centroidCoordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D centroidCoordinate; // @synthesize centroidCoordinate=_centroidCoordinate;
@property (readonly) NSString *fullname;
@property (readonly) BOOL isBlacklisted;
@property (readonly) NSString *shortenedName;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;

- (id)addressNodes;
- (struct CLLocationCoordinate2D)coordinate;
- (BOOL)diameterIsLargerThanDiameter:(double)arg1;

@end

