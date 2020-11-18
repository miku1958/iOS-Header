//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import <CarPlay/CPTemplateDelegate-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class NAFuture, NSArray, NSString;

@interface CPInformationTemplate : CPTemplate <CPTemplateDelegate, NSSecureCoding>
{
    long long _layout;
    NSString *_title;
    NSArray *_items;
    NSArray *_actions;
}

@property (copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) long long layout; // @synthesize layout=_layout;
@property (readonly) Class superclass;
@property (strong, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_sanitizeButtons:(id)arg1;
- (id)_sanitizeItems:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 layout:(long long)arg2 items:(id)arg3 actions:(id)arg4;
- (void)performUpdate;
- (void)updateTemplatePropertiesFromTemplate:(id)arg1;

@end
