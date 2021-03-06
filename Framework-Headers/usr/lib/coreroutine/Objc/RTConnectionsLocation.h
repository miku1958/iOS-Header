//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, RTLocation;

@interface RTConnectionsLocation : NSObject
{
    RTLocation *_location;
    NSString *_name;
    NSString *_originatingBundleID;
    NSString *_fullFormattedAddress;
    NSURL *_mapItemURL;
    NSDate *_createdAt;
}

@property (readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property (readonly, nonatomic) NSString *fullFormattedAddress; // @synthesize fullFormattedAddress=_fullFormattedAddress;
@property (readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) NSURL *mapItemURL; // @synthesize mapItemURL=_mapItemURL;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;

- (void).cxx_destruct;
- (id)_addProactiveExpertSourceTo:(id)arg1;
- (id)_mapItemFromForwardGeocode:(id)arg1 options:(id)arg2;
- (id)_mapItemFromLocalSearch:(id)arg1 options:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithLocation:(id)arg1 name:(id)arg2 originatingBundleID:(id)arg3 fullFormattedAddress:(id)arg4 mapItemURL:(id)arg5 createdAt:(id)arg6;
- (id)mapItemUsingMapServiceManager:(id)arg1 options:(id)arg2;

@end

