//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class DEDBugSession, DEDExtensionIdentifier, NSArray, NSString, NSURL;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving>
{
    DEDBugSession *_fromBugSession;
    NSString *_deviceID;
    NSURL *_rootURL;
    NSString *_displayName;
    NSString *_extensionID;
    NSArray *_attachmentItems;
    DEDExtensionIdentifier *_dedExtensionIdentifier;
}

@property (strong) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier; // @synthesize dedExtensionIdentifier=_dedExtensionIdentifier;
@property (readonly, copy) NSString *description;
@property (strong) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (strong) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property (strong) DEDBugSession *fromBugSession; // @synthesize fromBugSession=_fromBugSession;
@property (readonly) unsigned long long hash;
@property (strong) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)groupWithDEGroup:(id)arg1 identifier:(id)arg2;
+ (id)groupWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)archiveName;
- (BOOL)isLocal;
- (id)serialize;
- (id)totalFilesize;

@end

