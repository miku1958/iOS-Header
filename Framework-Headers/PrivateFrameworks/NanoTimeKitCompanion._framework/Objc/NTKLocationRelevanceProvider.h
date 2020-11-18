//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRelevanceProvider.h>

@class CLLocation;

@interface NTKLocationRelevanceProvider : NTKRelevanceProvider
{
    BOOL _isHomeLocation;
    BOOL _isWorkLocation;
    CLLocation *_location;
    double _radius;
    double _accuracy;
}

@property (readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property (readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly, nonatomic, getter=isUserHomeLocation) BOOL userHomeLocation;
@property (readonly, nonatomic, getter=isUserWorkLocation) BOOL userWorkLocation;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initForHomeLocationWithRadius:(double)arg1;
- (id)initForHomeLocationWithRadius:(double)arg1 accuracy:(double)arg2;
- (id)initForWorkLocationWithRadius:(double)arg1;
- (id)initForWorkLocationWithRadius:(double)arg1 accuracy:(double)arg2;
- (id)initWithLocation:(id)arg1 radius:(double)arg2;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end
