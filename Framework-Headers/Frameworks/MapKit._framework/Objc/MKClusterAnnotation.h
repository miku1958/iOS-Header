//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <MKAnnotation>
{
    NSArray *_memberAnnotations;
    NSString *_clusteringIdentifier;
    struct CLLocationCoordinate2D __coordinate;
    NSString *__title;
    NSString *__subtitle;
    CDStruct_81fb2dc1 _flags;
}

@property (copy, nonatomic) NSString *clusteringIdentifier; // @synthesize clusteringIdentifier=_clusteringIdentifier;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=__coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *memberAnnotations; // @synthesize memberAnnotations=_memberAnnotations;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=__subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=__title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D)_averageCoordinate;
- (BOOL)_isMKClusterAnnotation;
- (void)_memberAnnotationCoordinateDidChange;
- (id)initWithMemberAnnotations:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
