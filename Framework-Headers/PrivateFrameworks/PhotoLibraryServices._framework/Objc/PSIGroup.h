//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject
{
    NSMutableString *_contentString;
    NSMutableString *_normalizedString;
    NSMutableString *_lookupIdentifier;
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned long long _tokenRangesCount;
    short _category;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
    struct __CFArray *_assetIds;
    struct __CFArray *_collectionIds;
}

@property (strong, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property (nonatomic) short category; // @synthesize category=_category;
@property (strong, nonatomic) struct __CFArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property (readonly, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property (nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property (readonly, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
@property (readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_normalizedString;
@property (nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_627e0f85 *)arg2 count:(long long)arg3;
- (void).cxx_destruct;
- (id)_tokenRangesDescription;
- (long long)compareToGroup:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)groupIdForObjectLookup;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentString:(id)arg1 lookIdentifier:(id)arg2 category:(short)arg3 owningGroupId:(long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)prepareForReuse;
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenRangesCount;
- (void)unionCollectionIdsWithGroup:(id)arg1;
- (void)unionIdsWithGroup:(id)arg1;

@end
