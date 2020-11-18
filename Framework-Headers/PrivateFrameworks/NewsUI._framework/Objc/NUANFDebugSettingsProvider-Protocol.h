//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol NUANFDebugSettingsObserver;

@protocol NUANFDebugSettingsProvider <NSObject>

@property (readonly, nonatomic) BOOL testingConditionEnabled;
@property (readonly, nonatomic) BOOL viewportDebuggingEnabled;

- (void)addObserver:(id<NUANFDebugSettingsObserver>)arg1;
- (void)removeObserver:(id<NUANFDebugSettingsObserver>)arg1;
@end
