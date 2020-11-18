//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DEExtensionHostContext, NSExtension, NSRecursiveLock, NSString;

@interface DEExtension : NSObject
{
    BOOL _isLoggingEnabled;
    BOOL _allowUserAttachmentSelection;
    NSString *_attachmentsName;
    NSString *_identifier;
    DEExtensionHostContext *_context;
    NSString *_loggingConsent;
    NSExtension *_extension;
    NSRecursiveLock *_extensionHostLoadingLock;
}

@property (nonatomic) BOOL allowUserAttachmentSelection; // @synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection;
@property (strong, nonatomic) NSString *attachmentsName; // @synthesize attachmentsName=_attachmentsName;
@property (strong, nonatomic) DEExtensionHostContext *context; // @synthesize context=_context;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (strong) NSRecursiveLock *extensionHostLoadingLock; // @synthesize extensionHostLoadingLock=_extensionHostLoadingLock;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isLoggingEnabled; // @synthesize isLoggingEnabled=_isLoggingEnabled;
@property (strong, nonatomic) NSString *loggingConsent; // @synthesize loggingConsent=_loggingConsent;

- (void).cxx_destruct;
- (void)attachmentListWithHandler:(CDUnknownBlockType)arg1;
- (void)attachmentsForParameters:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (BOOL)checkAndTeardown;
- (void)createExtensionHostContextCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)endUsingExtension;
- (Class)extensionTrackerClass;
- (id)initWithNSExtension:(id)arg1;
- (void)performWithHostContext:(CDUnknownBlockType)arg1;
- (void)setupWithParameters:(id)arg1 session:(id)arg2;
- (void)setupWithParameters:(id)arg1 session:(id)arg2 expirationDate:(id)arg3;
- (void)teardownWithParameters:(id)arg1 session:(id)arg2;

@end
