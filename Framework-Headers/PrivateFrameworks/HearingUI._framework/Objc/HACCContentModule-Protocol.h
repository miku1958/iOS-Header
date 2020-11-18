//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUI/NSObject-Protocol.h>

@class NSNumber;
@protocol HACCContentModuleDelegate;

@protocol HACCContentModule <NSObject>

@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

- (NSNumber *)contentValue;
- (BOOL)enabled;
- (void)updateValue;
@end
