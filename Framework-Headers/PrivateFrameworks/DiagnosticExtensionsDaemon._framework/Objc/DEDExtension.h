//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@class DEDExtensionIdentifier, NSString;

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying>
{
    NSString *_identifier;
    DEDExtensionIdentifier *_dedExtensionIdentifier;
    NSString *_name;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong) DEDExtensionIdentifier *dedExtensionIdentifier; // @synthesize dedExtensionIdentifier=_dedExtensionIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)arg1;
+ (id)extensionWithDicionary:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;

@end
