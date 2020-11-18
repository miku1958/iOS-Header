//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSDisplayLayoutElement, NSString;

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding>
{
    Class _elementClass;
    NSString *_identifier;
    FBSDisplayLayoutElement *_element;
    long long _displayType;
    BOOL _activated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property (readonly, strong, nonatomic) FBSDisplayLayoutElement *element; // @synthesize element=_element;
@property (readonly, nonatomic) Class elementClass; // @synthesize elementClass=_elementClass;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

- (void)activate;
- (void)activateWithBuilder:(CDUnknownBlockType)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDisplayType:(long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateWithBuilder:(CDUnknownBlockType)arg1;

@end

