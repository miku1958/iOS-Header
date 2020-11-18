//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostAnimationSubInterval.h>

#import <SignpostSupport/SignpostCARenderServerFrameMetadata-Protocol.h>

@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>
{
    unsigned int _swapId;
    unsigned int _frameSeed;
}

@property (readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
@property (readonly, nonatomic) unsigned int swapId; // @synthesize swapId=_swapId;

- (id)initWithHIDLatencyInterval:(id)arg1;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned int)arg4 frameSeed:(unsigned int)arg5;

@end
