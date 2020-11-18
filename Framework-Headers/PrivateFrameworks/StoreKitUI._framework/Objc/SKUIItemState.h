//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSNumber, NSString, SKUIStoreIdentifier;

@interface SKUIItemState : NSObject <NSCopying>
{
    unsigned long long _downloadContentFlags;
    NSString *_downloadPhase;
    float _downloadProgress;
    NSNumber *_itemIdentifier;
    unsigned long long _libraryContentFlags;
    long long _mediaCategory;
    unsigned long long _state;
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_variantIdentifier;
}

@property (readonly, nonatomic) BOOL activeStateIsPreview;
@property (readonly, nonatomic) unsigned long long allContentFlags;
@property (nonatomic) unsigned long long downloadContentFlags; // @synthesize downloadContentFlags=_downloadContentFlags;
@property (copy, nonatomic) NSString *downloadPhase; // @synthesize downloadPhase=_downloadPhase;
@property (nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property (copy, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (nonatomic) unsigned long long libraryContentFlags; // @synthesize libraryContentFlags=_libraryContentFlags;
@property (nonatomic) long long mediaCategory; // @synthesize mediaCategory=_mediaCategory;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (copy, nonatomic) NSString *variantIdentifier; // @synthesize variantIdentifier=_variantIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
