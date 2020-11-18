//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUANFDebugSettingsProvider-Protocol.h>

@class NSString;

@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider>
{
    BOOL _viewportDebuggingEnabled;
    BOOL _testingConditionEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property (readonly, nonatomic) BOOL viewportDebuggingEnabled; // @synthesize viewportDebuggingEnabled=_viewportDebuggingEnabled;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

