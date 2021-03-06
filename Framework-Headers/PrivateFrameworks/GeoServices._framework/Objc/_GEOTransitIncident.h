//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitIncident-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPBTransitIncident, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding>
{
    GEOPBTransitIncident *_incident;
}

@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncident:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

