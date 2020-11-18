//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthAlgorithms/SRSampleExporting-Protocol.h>
#import <HealthAlgorithms/SRSampling-Protocol.h>

@class NSData, NSString;

@interface HAPPGExporter : NSObject <SRSampleExporting, SRSampling>
{
    double _srTimestamp;
    NSData *_mimosaData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)sr_exportRepresentationEnumerator;

@end
