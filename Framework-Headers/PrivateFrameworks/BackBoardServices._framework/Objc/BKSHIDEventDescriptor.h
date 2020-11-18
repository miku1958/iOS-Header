//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    unsigned int _hidEventType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int hidEventType; // @synthesize hidEventType=_hidEventType;
@property (readonly) Class superclass;

+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (id)reusableDescriptorWithEventType:(unsigned int)arg1;
+ (id)reusableKeyboardDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (id)reusableVendorDefinedDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;
- (BOOL)describes:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
