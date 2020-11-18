//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentView;
@protocol SXComponent, SXComponentViewPostProcessor;

@protocol SXComponentViewPostProcessorManager <NSObject>
- (void)addProcessor:(id<SXComponentViewPostProcessor>)arg1;
- (void)processComponent:(id<SXComponent>)arg1 view:(SXComponentView *)arg2;
- (void)removeProcessor:(id<SXComponentViewPostProcessor>)arg1;
@end

