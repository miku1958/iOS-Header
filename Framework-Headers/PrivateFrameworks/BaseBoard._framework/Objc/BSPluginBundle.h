//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject <BSDescriptionProviding>
{
    NSBundle *_bundle;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
    NSString *_identifier;
    NSString *_name;
    NSString *_type;
    Class _principalClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) Class principalClass; // @synthesize principalClass=_principalClass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)loadPlugin;
- (BOOL)loadPlugin:(CDUnknownBlockType)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
