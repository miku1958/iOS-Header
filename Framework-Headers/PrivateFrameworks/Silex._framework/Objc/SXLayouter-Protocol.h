//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout, SXLayoutBlueprint;
@protocol SXLayouterDelegate;

@protocol SXLayouter <NSObject>

@property (weak, nonatomic) id<SXLayouterDelegate> delegate;

- (void)layoutBlueprint:(SXLayoutBlueprint *)arg1 columnLayout:(SXColumnLayout *)arg2 shouldContinue:(BOOL *)arg3;
@end

