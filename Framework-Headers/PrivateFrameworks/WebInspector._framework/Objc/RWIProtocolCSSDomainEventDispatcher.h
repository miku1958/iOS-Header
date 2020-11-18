//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolCSSDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)mediaQueryResultChanged;
- (void)namedFlowCreatedWithNamedFlow:(id)arg1;
- (void)namedFlowRemovedWithDocumentNodeId:(int)arg1 flowName:(id)arg2;
- (void)regionOversetChangedWithNamedFlow:(id)arg1;
- (void)registeredNamedFlowContentElementWithDocumentNodeId:(int)arg1 flowName:(id)arg2 contentNodeId:(int)arg3 nextContentNodeId:(int)arg4;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)unregisteredNamedFlowContentElementWithDocumentNodeId:(int)arg1 flowName:(id)arg2 contentNodeId:(int)arg3;

@end

