//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSDictionary, NSString, RBSProcessHandle;

@interface RBSHandshakeResponse : NSObject <RBSXPCSecureCoding>
{
    RBSProcessHandle *_handle;
    NSDictionary *_assertionIdentifiersByOldIdentifier;
    NSDictionary *_assertionErrorsByOldIdentifier;
}

@property (strong, nonatomic) NSDictionary *assertionErrorsByOldIdentifier; // @synthesize assertionErrorsByOldIdentifier=_assertionErrorsByOldIdentifier;
@property (strong, nonatomic) NSDictionary *assertionIdentifiersByOldIdentifier; // @synthesize assertionIdentifiersByOldIdentifier=_assertionIdentifiersByOldIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RBSProcessHandle *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsRBSXPCSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
