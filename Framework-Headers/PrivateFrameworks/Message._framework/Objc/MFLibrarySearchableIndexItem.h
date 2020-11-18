//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CSSearchableItem, MFMailMessage, NSData, NSString;

@interface MFLibrarySearchableIndexItem : NSObject
{
    BOOL _hasCompleteBodyData;
    NSString *_identifier;
    MFMailMessage *_message;
    long long _indexingType;
    NSData *_bodyData;
}

@property (strong, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (nonatomic) BOOL hasCompleteBodyData; // @synthesize hasCompleteBodyData=_hasCompleteBodyData;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long indexingType; // @synthesize indexingType=_indexingType;
@property (readonly, strong, nonatomic) MFMailMessage *message; // @synthesize message=_message;
@property (readonly, strong, nonatomic) CSSearchableItem *searchableItem;

+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;
+ (id)transactionAttributeKey;
- (BOOL)_isMessagePartOfExistingThreadWithHeaders:(id)arg1;
- (BOOL)_shouldAutoDownloadAttachment:(id)arg1;
- (void)_updateAllAttributesInAttributeSet:(id)arg1 clientState:(id)arg2;
- (void)_updateFlagsAttributesInAttributeSet:(id)arg1;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)fetchIndexableAttachments;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;
- (id)searchableItemWithClientState:(id)arg1;
- (BOOL)shouldExcludeFromIndex;

@end

