//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFStateDumpBuilder, HFStateDumpBuilderContext;

@protocol HFStateDumpBuildable <NSObject>
- (HFStateDumpBuilder *)hf_stateDumpBuilderWithContext:(HFStateDumpBuilderContext *)arg1;

@optional
+ (BOOL)hf_prefersAutoSynthesizedDescription;
@end
