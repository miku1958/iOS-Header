//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveContextClient/NSObject-Protocol.h>

@class ATXModeFeatureSet;
@protocol ATXModeFeaturizerDelegate;

@protocol ATXModeFeaturizer <NSObject>

@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;

- (void)beginListening;
- (ATXModeFeatureSet *)provideFeatures;
- (void)stopListening;
@end

