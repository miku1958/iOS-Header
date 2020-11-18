//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioSessionMediaProperties : NSObject
{
    double _preferredSampleRate;
    double _preferredBlockSize;
    int _operatingMode;
    unsigned int _vpOperatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct AudioStreamBasicDescription _outputFormat;
    int _processId;
    BOOL _sessionActive;
}

@property (nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property (nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property (nonatomic) struct AudioStreamBasicDescription outputFormat; // @synthesize outputFormat=_outputFormat;
@property (nonatomic) double preferredBlockSize; // @synthesize preferredBlockSize=_preferredBlockSize;
@property (nonatomic) double preferredSampleRate; // @synthesize preferredSampleRate=_preferredSampleRate;
@property (nonatomic) int processId; // @synthesize processId=_processId;
@property (nonatomic, getter=isSessionActive) BOOL sessionActive; // @synthesize sessionActive=_sessionActive;
@property (nonatomic) unsigned int vpOperatingMode; // @synthesize vpOperatingMode=_vpOperatingMode;

- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
