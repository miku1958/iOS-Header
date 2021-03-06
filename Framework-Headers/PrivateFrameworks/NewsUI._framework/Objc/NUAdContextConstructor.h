//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUAdContextDefinition;

@interface NUAdContextConstructor : NSObject
{
    NUAdContextDefinition *_rootDefinition;
    NUAdContextDefinition *_headerDefinition;
    NUAdContextDefinition *_bodyDefinition;
}

@property (readonly, nonatomic) NUAdContextDefinition *bodyDefinition; // @synthesize bodyDefinition=_bodyDefinition;
@property (readonly, nonatomic) NUAdContextDefinition *headerDefinition; // @synthesize headerDefinition=_headerDefinition;
@property (readonly, nonatomic) NUAdContextDefinition *rootDefinition; // @synthesize rootDefinition=_rootDefinition;

- (void).cxx_destruct;
- (id)contextEntryForKey:(id)arg1 andValue:(id)arg2;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2;
- (void)dictionary:(id)arg1 addValue:(id)arg2 forKeyPath:(id)arg3;
- (id)initWithRootDefinition:(id)arg1 headerDefinition:(id)arg2 bodyDefinition:(id)arg3;
- (id)newsContextForContextProviders:(id)arg1 andKeyedContextProviders:(id)arg2;
- (id)valueForPropertyDefinition:(id)arg1 fromContextProviders:(id)arg2 keyedContextProviders:(id)arg3;

@end

