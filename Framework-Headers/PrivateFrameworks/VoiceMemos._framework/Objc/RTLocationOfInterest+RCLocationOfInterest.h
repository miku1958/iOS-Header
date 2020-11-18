//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTLocationOfInterest.h>

#import <VoiceMemos/RCLocationOfInterest-Protocol.h>

@class CLLocation, NSString;
@protocol GEOMapItem;

@interface RTLocationOfInterest (RCLocationOfInterest) <RCLocationOfInterest>

@property (readonly, nonatomic) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<GEOMapItem> geoMapItem;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double uncertainty;

@end

