//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMICamera : HMFObject <HMFLogging, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly) NSString *model; // @synthesize model=_model;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 manufacturer:(id)arg3 model:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end
