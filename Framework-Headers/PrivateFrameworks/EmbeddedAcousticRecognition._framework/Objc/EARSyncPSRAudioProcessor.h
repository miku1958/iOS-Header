//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EARSyncPSRAudioProcessorDelegate, OS_dispatch_queue;

@interface EARSyncPSRAudioProcessor : NSObject
{
    struct shared_ptr<quasar::SyncPSRAudioProcessor> _audioProcessor;
    struct SystemConfig _sysConfig;
    unsigned long long _sampleRate;
    double _scoreReportTimestamp;
    id<EARSyncPSRAudioProcessorDelegate> _delegate;
    NSString *_configRoot;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSString *configRoot; // @synthesize configRoot=_configRoot;
@property (weak, nonatomic) id<EARSyncPSRAudioProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAudio:(id)arg1;
- (void)endAudio;
- (id)getLatestSuperVector;
- (unsigned long long)getProcessedAudioDurationMs;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;
- (void)resetForNewRequest;

@end

