//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;
@protocol NFDefinitionContainer;

@interface NFDefinition : NSObject
{
    id<NFDefinitionContainer> _privateAccessContainer;
    id<NFDefinitionContainer> _privateAccessWeakContainer;
    BOOL _canBeOverridden;
    BOOL _canBeNil;
    unsigned long long _source;
    Class _cls;
    Protocol *_protocol;
    CDUnknownBlockType _factory;
    unsigned long long _scope;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _configurationBlock;
}

@property (nonatomic) BOOL canBeNil; // @synthesize canBeNil=_canBeNil;
@property (nonatomic) BOOL canBeOverridden; // @synthesize canBeOverridden=_canBeOverridden;
@property (strong, nonatomic) Class cls; // @synthesize cls=_cls;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property (copy, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property (strong, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property (nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property (nonatomic) unsigned long long source; // @synthesize source=_source;
@property (copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;

- (void).cxx_destruct;
- (id)canBeNil:(BOOL)arg1;
- (id)canBeOverridden:(BOOL)arg1;
- (id)description;
- (id)inScope:(unsigned long long)arg1;
- (id)initWithClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithUnsafeFactory:(CDUnknownBlockType)arg1;
- (id)privateAccessContainer;
- (id)withConfiguration:(CDUnknownBlockType)arg1;
- (id)withPrivateAccessInContainer:(id)arg1;
- (id)withPrivateAccessInWeakContainer:(id)arg1;
- (id)withValidation:(CDUnknownBlockType)arg1;

@end

