//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SADialogText : SABaseAceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *speakableTextOverride;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

