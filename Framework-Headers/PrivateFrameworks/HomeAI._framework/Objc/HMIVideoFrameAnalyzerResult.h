//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoEvent-Protocol.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent>
{
    HMIVideoFrame *_frame;
    NSSet *_events;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events; // @synthesize events=_events;
@property (readonly) HMIVideoFrame *frame; // @synthesize frame=_frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) CDStruct_1b6d18a9 time;

- (void).cxx_destruct;
- (id)initWithFrame:(id)arg1 events:(id)arg2;

@end

