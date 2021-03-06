//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthAlgorithms/SRMultiSampleExporting-Protocol.h>

@class NSMutableArray, NSString;

@interface HAECGExporter : NSObject <SRMultiSampleExporting>
{
    struct unique_ptr<CinnAlgs::CnAlgs, std::__1::default_delete<CinnAlgs::CnAlgs>> _cinAlgs;
    NSMutableArray *_currentLiveWaveform;
    BOOL _fromRightWrist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fromRightWrist; // @synthesize fromRightWrist=_fromRightWrist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dumpCurrentWaveform;
- (void)handleRealtimeSamples:(const float *)arg1 count:(unsigned int)arg2 startTimestamp:(unsigned long long)arg3;
- (void)resetFilter;
- (void)sr_beginMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)arg1;
- (id)sr_endMultiSampleStream;

@end

