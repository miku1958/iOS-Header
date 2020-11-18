//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding>
{
    unsigned int _hidEventType;
}

@property (readonly) unsigned int hidEventType; // @synthesize hidEventType=_hidEventType;

+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (id)reusableDescriptorWithEventType:(unsigned int)arg1;
+ (id)reusableKeyboardDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (id)reusableVendorDefinedDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;
- (BOOL)describes:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;

@end

