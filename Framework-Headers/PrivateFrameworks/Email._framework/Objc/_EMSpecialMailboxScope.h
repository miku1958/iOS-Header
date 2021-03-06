//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMailboxScope.h>

#import <Email/EFCacheable-Protocol.h>

@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>
{
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(BOOL *)arg2;
- (id)cachedSelf;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)excludeMailboxes;
- (BOOL)excludeTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mailboxObjectIDs;
- (id)mailboxScopeByAddingMailboxes:(id)arg1;
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;
- (id)mailboxTypes;
- (BOOL)scopeContainsMailbox:(id)arg1;
- (BOOL)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;

@end

