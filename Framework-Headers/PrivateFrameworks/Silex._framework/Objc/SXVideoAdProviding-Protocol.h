//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXVideoProviding-Protocol.h>

@protocol SXVideoAdProviding <SXVideoProviding>

@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) unsigned long long skipThreshold;

- (void)presentAction;
- (void)presentPrivacyStatement;
- (void)skipped;
@end

