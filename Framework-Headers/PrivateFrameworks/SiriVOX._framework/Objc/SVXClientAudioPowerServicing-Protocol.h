//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@protocol SVXClientAudioPowerServiceDelegate;

@protocol SVXClientAudioPowerServicing <NSObject>

@property (weak, nonatomic) id<SVXClientAudioPowerServiceDelegate> delegate;

- (void)beginUpdateWithFrequency:(long long)arg1;
- (void)endUpdate;
@end
