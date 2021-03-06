//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRecents/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CRRecentContact : NSObject <NSSecureCoding>
{
    NSMutableArray *_recentDates;
    long long _contactID;
    NSString *_recentsDomain;
    NSString *_displayName;
    NSString *_kind;
    NSString *_address;
    NSString *_lastSendingAddress;
    NSString *_originalSource;
    NSDictionary *_metadata;
    NSNumber *_weight;
    NSNumber *_decayedWeight;
    NSArray *_members;
    unsigned long long _groupKind;
    long long _recentID;
    NSString *_groupName;
    NSString *_rawAddress;
}

@property (copy, nonatomic) NSString *address; // @synthesize address=_address;
@property (nonatomic) long long contactID; // @synthesize contactID=_contactID;
@property (readonly, nonatomic) unsigned long long countOfRecents;
@property (strong, nonatomic) NSNumber *decayedWeight; // @synthesize decayedWeight=_decayedWeight;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (nonatomic) unsigned long long groupKind; // @synthesize groupKind=_groupKind;
@property (copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property (copy, nonatomic) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property (readonly, copy, nonatomic) NSDate *leastRecentDate;
@property (copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, copy, nonatomic) NSDate *mostRecentDate;
@property (copy, nonatomic) NSString *originalSource; // @synthesize originalSource=_originalSource;
@property (copy, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
@property (copy, nonatomic) NSArray *recentDates;
@property (nonatomic) long long recentID; // @synthesize recentID=_recentID;
@property (copy, nonatomic) NSString *recentsDomain; // @synthesize recentsDomain=_recentsDomain;
@property (strong, nonatomic) NSNumber *weight; // @synthesize weight=_weight;

+ (BOOL)supportsSecureCoding;
- (void)_enumerateWordsInString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct __CFStringTokenizer *)_wordTokenizerForString:(id)arg1 locale:(id)arg2;
- (void)applyWeight:(id)arg1;
- (id)archivableContactID;
- (id)archivableGroupKind;
- (id)archivableGroupMembers;
- (id)archivableMetadata;
- (id)archivableRecentID;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateArchivablePropertiesWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasFullTextMatch:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactID:(long long)arg1;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(BOOL)arg3;
- (unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(BOOL *)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)lazilyCreateRecentDates;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setArchivableContactID:(id)arg1;
- (void)setArchivableGroupKind:(id)arg1;
- (void)setArchivableGroupMembers:(id)arg1;
- (void)setArchivableMetadata:(id)arg1;
- (void)setArchivableRecentID:(id)arg1;

@end

