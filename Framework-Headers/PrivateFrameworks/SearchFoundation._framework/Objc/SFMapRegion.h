//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMapRegion-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMapRegion : NSObject <SFMapRegion, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int southLat:1;
        unsigned int westLng:1;
        unsigned int northLat:1;
        unsigned int eastLng:1;
    } _has;
    double _southLat;
    double _westLng;
    double _northLat;
    double _eastLng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double eastLng; // @synthesize eastLng=_eastLng;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double northLat; // @synthesize northLat=_northLat;
@property (nonatomic) double southLat; // @synthesize southLat=_southLat;
@property (readonly) Class superclass;
@property (nonatomic) double westLng; // @synthesize westLng=_westLng;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasEastLng;
- (BOOL)hasNorthLat;
- (BOOL)hasSouthLat;
- (BOOL)hasWestLng;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
