//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInteractionHandlerManager-Protocol.h>

@class NSMapTable, NSString;

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager>
{
    NSMapTable *_interactionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *interactionHandlers; // @synthesize interactionHandlers=_interactionHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
- (id)componentViewForLocation:(struct CGPoint)arg1;
- (id)init;
- (id)interactionsForComponentView:(id)arg1;
- (id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;
- (void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
- (void)updateUserInteractionForComponentView:(id)arg1;

@end

