//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWUnitTestSampler-Protocol.h>

@class AWUnitTestFaceDetectOperation;
@protocol BKDevicePearlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler>
{
    CDStruct_2c6bab44 _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    CDUnknownBlockType _displayCallback;
    BOOL _facePresent;
    id<BKDevicePearlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_2c6bab44 *_sampleStatsPtr;
}

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL facePresent; // @synthesize facePresent=_facePresent;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property CDStruct_2c6bab44 *sampleStatsPtr; // @synthesize sampleStatsPtr=_sampleStatsPtr;

+ (id)sharedDevice;
- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (void)deliverPearlDeviceEvent:(long long)arg1;
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)resetStats;
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;
- (void)setDisplayState:(BOOL)arg1;
- (void)setSampleState:(BOOL)arg1;

@end

