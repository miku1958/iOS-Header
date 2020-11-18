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
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned long long _tokenRangesCount;
    short _category;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
    struct __CFArray *_assetIds;
}

@property (strong, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property (nonatomic) short category; // @synthesize category=_category;
@property (readonly, strong, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property (nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property (nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_627e0f85 *)arg2 count:(long long)arg3;
- (id)_tokenRangesDescription;
- (long long)compareToGroup:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)groupIdForAssetLookup;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenRangesCount;

@end
