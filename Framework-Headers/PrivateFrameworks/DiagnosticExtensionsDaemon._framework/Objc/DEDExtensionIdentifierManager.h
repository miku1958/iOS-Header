//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving>
{
    NSMutableDictionary *_identifierTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *identifierTable; // @synthesize identifierTable=_identifierTable;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)log;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)allIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierForExtensionIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifiers:(id)arg1;
- (BOOL)isKnownIdentifier:(id)arg1;
- (id)knownIdentifiersForExtensionIdentifier:(id)arg1;
- (void)reset;
- (void)revokeIdentifier:(id)arg1;

@end

