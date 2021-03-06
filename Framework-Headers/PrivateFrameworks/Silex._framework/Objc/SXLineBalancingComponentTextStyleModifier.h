//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMModifying-Protocol.h>

@class NSString, SXLineBalancingSettings;

@interface SXLineBalancingComponentTextStyleModifier : NSObject <SXDOMModifying>
{
    SXLineBalancingSettings *_settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXLineBalancingSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enableLineBalancingForComponentTextStyleWithIdentifier:(id)arg1 DOM:(id)arg2 context:(id)arg3;
- (id)initWithSettings:(id)arg1;
- (void)modifyDOM:(id)arg1 context:(id)arg2;

@end

