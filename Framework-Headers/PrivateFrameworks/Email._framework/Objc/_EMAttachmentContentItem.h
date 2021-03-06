//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMMutableContentItem-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class EMMailDropMetadata, EMObjectID, NSArray, NSString;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding>
{
    BOOL _isAvailableLocally;
    BOOL _isSinglePagePDF;
    int _exchangeEventUID;
    NSArray *_availableRepresentations;
    NSString *_contentID;
    long long _dataTransferByteCount;
    NSString *_displayName;
    CDUnknownBlockType _loaderBlock;
    long long _storageByteCount;
    NSString *_UTType;
    EMMailDropMetadata *_mailDropMetadata;
}

@property (copy, nonatomic) NSString *UTType; // @synthesize UTType=_UTType;
@property (copy, nonatomic) NSArray *availableRepresentations; // @synthesize availableRepresentations=_availableRepresentations;
@property (copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property (nonatomic) long long dataTransferByteCount; // @synthesize dataTransferByteCount=_dataTransferByteCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) int exchangeEventUID; // @synthesize exchangeEventUID=_exchangeEventUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAvailableLocally; // @synthesize isAvailableLocally=_isAvailableLocally;
@property (nonatomic) BOOL isSinglePagePDF; // @synthesize isSinglePagePDF=_isSinglePagePDF;
@property (copy, nonatomic) CDUnknownBlockType loaderBlock; // @synthesize loaderBlock=_loaderBlock;
@property (copy, nonatomic) EMMailDropMetadata *mailDropMetadata; // @synthesize mailDropMetadata=_mailDropMetadata;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (nonatomic) long long storageByteCount; // @synthesize storageByteCount=_storageByteCount;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_isSinglePagePDFWithContentURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

