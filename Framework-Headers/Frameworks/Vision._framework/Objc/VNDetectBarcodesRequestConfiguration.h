//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration
{
    NSArray *_symbologies;
    NSString *_locateMode;
}

@property (copy, nonatomic) NSString *locateMode; // @synthesize locateMode=_locateMode;
@property (copy, nonatomic) NSArray *symbologies; // @synthesize symbologies=_symbologies;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

