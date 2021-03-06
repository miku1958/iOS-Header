//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding>
{
    NSDictionary *_servicesByIdentifier;
    NSString *_identifier;
    NSString *_machName;
    NSOrderedSet *_orderedServices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *machName; // @synthesize machName=_machName;
@property (readonly, copy, nonatomic) NSSet *services;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)serviceForIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

