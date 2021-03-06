//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/MKAnnotation-Protocol.h>
#import <Social/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSURL *_pictureURL;
    NSString *_category;
    double _latitude;
    double _longitude;
    double _distance;
}

@property (strong) NSString *category; // @synthesize category=_category;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double distance; // @synthesize distance=_distance;
@property (readonly) unsigned long long hash;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property double latitude; // @synthesize latitude=_latitude;
@property double longitude; // @synthesize longitude=_longitude;
@property (strong) NSString *name; // @synthesize name=_name;
@property (strong) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)encodableProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

