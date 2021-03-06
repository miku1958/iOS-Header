//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSData, NSString;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *etaFilter;
@property (copy, nonatomic) NSData *evChargingMetadata;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSData *originalWaypointRoute;
@property (copy, nonatomic) NSData *routeAsZilchBinary;
@property (copy, nonatomic) NSData *routeId;
@property (copy, nonatomic) NSData *sessionState;
@property (readonly) Class superclass;

+ (id)route;
+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

