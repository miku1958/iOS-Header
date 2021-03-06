//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWindowLayoutStrategy-Protocol.h>

@class NSString;

@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    BOOL _clip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_strategyWithClipping:(BOOL)arg1;
+ (id)clipStrategy;
+ (id)noClipStrategy;
- (id)_init;
- (void)addObserver:(id)arg1;
- (struct CGRect)frameWithInterfaceOrientation:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)shouldClipForWindow:(id)arg1;

@end

