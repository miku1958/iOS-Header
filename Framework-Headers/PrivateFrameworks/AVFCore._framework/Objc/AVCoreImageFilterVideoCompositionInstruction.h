//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVVideoCompositionInstruction-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    CDStruct_e83c9415 _timeRange;
    NSArray *_requiredSourceTrackIDs;
    CDUnknownBlockType _handler;
    struct CGAffineTransform _sourceTrackPreferredTransform;
}

@property (readonly, nonatomic) BOOL containsTweening; // @dynamic containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePostProcessing; // @dynamic enablePostProcessing;
@property (readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int passthroughTrackID; // @dynamic passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property (nonatomic) struct CGAffineTransform sourceTrackPreferredTransform; // @synthesize sourceTrackPreferredTransform=_sourceTrackPreferredTransform;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;

- (void)dealloc;
- (id)init;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 sourceTrackIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
