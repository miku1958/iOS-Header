//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString, RBSAssertionIdentifier;
@protocol OS_xpc_object;

@interface RBSInheritance : NSObject <RBSXPCSecureCoding, NSCopying>
{
    NSString *_endowmentNamespace;
    NSString *_environment;
    NSObject<OS_xpc_object> *_encodedEndowment;
    RBSAssertionIdentifier *_originatingIdentifier;
    unsigned long long _originatingAttributePath;
    unsigned long long _hash;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property (readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
@property (readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long originatingAttributePath; // @synthesize originatingAttributePath=_originatingAttributePath;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *originatingIdentifier; // @synthesize originatingIdentifier=_originatingIdentifier;
@property (readonly) Class superclass;

+ (BOOL)supportsRBSXPCSecureCoding;
- (void).cxx_destruct;
- (id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowment;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

