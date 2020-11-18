//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFLatLng-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFLatLng : NSObject <SFLatLng, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int lat:1;
        unsigned int lng:1;
    } _has;
    double _lat;
    double _lng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double lat; // @synthesize lat=_lat;
@property (nonatomic) double lng; // @synthesize lng=_lng;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasLat;
- (BOOL)hasLng;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
