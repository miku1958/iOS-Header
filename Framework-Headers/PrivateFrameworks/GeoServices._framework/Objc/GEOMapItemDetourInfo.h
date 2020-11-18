//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject
{
    GEOPDResultDetourInfo *_detourInfo;
}

@property (readonly, nonatomic) double detourDistance;
@property (readonly, nonatomic, getter=_detourInfo) GEOPDResultDetourInfo *detourInfo; // @synthesize detourInfo=_detourInfo;
@property (readonly, nonatomic) NSData *detourInfoAsData;
@property (readonly, nonatomic) double detourTime;
@property (readonly, nonatomic) double distanceToPlace;
@property (readonly, nonatomic) double timeToPlace;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResultDetourInfo:(id)arg1;

@end

