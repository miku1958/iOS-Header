//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthAlgorithms/SRSampling-Protocol.h>

@class NSData, NSString;

@interface HAECGSample : NSObject <SRSampling>
{
    NSData *_representation;
    double _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *representation; // @synthesize representation=_representation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;

@end

