//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOTransitIconDataSource-Protocol.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource>
{
    unsigned int _cartoID;
    unsigned int _defaultTransitType;
}

@property (readonly, nonatomic) unsigned int cartoID; // @synthesize cartoID=_cartoID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int defaultTransitType; // @synthesize defaultTransitType=_defaultTransitType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) int iconType;
@property (readonly) Class superclass;

- (id)initWithCartoId:(unsigned int)arg1 defaultTransitType:(unsigned int)arg2;

@end

