//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBFActionHandling;

@protocol SBFActionProviding <NSObject>
- (void)addActionHandler:(id<SBFActionHandling>)arg1;
- (void)removeActionHandler:(id<SBFActionHandling>)arg1;
@end
