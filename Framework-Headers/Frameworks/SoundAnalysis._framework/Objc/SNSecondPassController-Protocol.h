//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoundAnalysis/NSObject-Protocol.h>

@protocol SNResult;

@protocol SNSecondPassController <NSObject>

@property (copy) CDUnknownBlockType beginSecondPassHandler;
@property (copy) CDUnknownBlockType endSecondPassHandler;

- (void)firstPassDidProduceResult:(id<SNResult>)arg1;
- (void)secondPassDidProduceResult:(id<SNResult>)arg1;
@end
