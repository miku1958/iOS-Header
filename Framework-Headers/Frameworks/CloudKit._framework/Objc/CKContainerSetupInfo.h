//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAccountInfo, CKContainerID, NSString;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding>
{
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKAccountInfo *_accountInfoOverride;
}

@property (strong, nonatomic) CKAccountInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property (strong, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
