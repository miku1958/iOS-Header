//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTangierTextRepBehavior-Protocol.h>
#import <Silex/SXTextRenderCollector-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SXTangierTextRenderCollector : NSObject <SXTextRenderCollector, SXTangierTextRepBehavior>
{
    NSMutableDictionary *_flows;
    NSDictionary *_previousFlows;
    NSMutableDictionary *_layoutsByComponentIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *flows; // @synthesize flows=_flows;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *layoutsByComponentIdentifier; // @synthesize layoutsByComponentIdentifier=_layoutsByComponentIdentifier;
@property (strong, nonatomic) NSDictionary *previousFlows; // @synthesize previousFlows=_previousFlows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addTextStorage:(id)arg1 withLayout:(id)arg2 forNamedFlow:(id)arg3 directLayerHostView:(id)arg4 selectable:(BOOL)arg5 componentIdentifier:(id)arg6;
- (void)buildFlowsAndUpdateInfosWithICC:(id)arg1;
- (void)buildFlowsAndUpdateInfosWithICC:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)flowLayoutForComponentIdentifier:(id)arg1;
- (id)infoForStorage:(id)arg1 selection:(id)arg2;
- (id)init;
- (id)itemWithIdentifier:(id)arg1 storage:(id)arg2 directLayerHost:(id)arg3 inItems:(id)arg4;
- (void)storeItem:(id)arg1 forFlowName:(id)arg2;
- (BOOL)tangierTextRepAllowsSelection:(id)arg1;

@end
