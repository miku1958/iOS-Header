//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFDefinitionContainer-Protocol.h>
#import <NewsFoundation/NFRegistrationContainer-Protocol.h>

@class NFContainerPool, NSMutableDictionary, NSString;
@protocol NFResolver;

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer>
{
    id<NFResolver> _resolver;
    NSMutableDictionary *_definitions;
    NFContainerPool *_pool;
    NSMutableDictionary *_privateContainers;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSMutableDictionary *definitions; // @synthesize definitions=_definitions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NFContainerPool *pool; // @synthesize pool=_pool;
@property (strong, nonatomic) NSMutableDictionary *privateContainers; // @synthesize privateContainers=_privateContainers;
@property (strong, nonatomic) id<NFResolver> resolver; // @synthesize resolver=_resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)definitionForKey:(id)arg1;
- (id)init;
- (id)initAsPrivateContainer;
- (id)initWithAssemblies:(id)arg1;
- (id)register:(id)arg1 name:(id)arg2 createDefinitionBlock:(CDUnknownBlockType)arg3;
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (void)validateDefinitionsWithProxyResolver:(id)arg1;

@end

