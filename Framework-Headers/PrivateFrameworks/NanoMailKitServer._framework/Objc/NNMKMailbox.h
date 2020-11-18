//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>
#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface NNMKMailbox : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _syncEnabled;
    BOOL _syncRequested;
    BOOL _syncActive;
    BOOL _hasSelection;
    unsigned long long _type;
    unsigned long long _filterType;
    NSString *_mailboxId;
    NSString *_accountId;
    NSURL *_url;
    NSString *_customName;
}

@property (strong, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (strong, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property (nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property (nonatomic) BOOL hasSelection; // @synthesize hasSelection=_hasSelection;
@property (strong, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL syncActive; // @synthesize syncActive=_syncActive;
@property (nonatomic) BOOL syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property (nonatomic) BOOL syncRequested; // @synthesize syncRequested=_syncRequested;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)idsFromMailboxes:(id)arg1;
+ (unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1;
+ (unsigned long long)syncedTypeFromMailbox:(id)arg1;
- (void).cxx_destruct;
- (void)addFilterType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAnyFilter;
- (BOOL)hasCompoundFilters;
- (BOOL)hasFilterType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelectedForFilterType:(unsigned long long)arg1;
- (void)removeFilterType:(unsigned long long)arg1;
- (void)resetURL;

@end

