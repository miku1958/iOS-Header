//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/NSSecureCoding-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCSandboxExtension : NSObject <NSSecureCoding>
{
    BOOL _canAccessFileURL;
    BOOL _shouldIssueSandboxExtensionWhenEncoding;
    NSURL *_fileURL;
    long long _sandboxExtensionHandle;
}

@property (readonly, nonatomic) BOOL canAccessFileURL; // @synthesize canAccessFileURL=_canAccessFileURL;
@property (readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property (readonly, nonatomic) BOOL shouldIssueSandboxExtensionWhenEncoding; // @synthesize shouldIssueSandboxExtensionWhenEncoding=_shouldIssueSandboxExtensionWhenEncoding;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)relinquish;

@end

