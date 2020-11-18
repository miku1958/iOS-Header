//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlayer/MPMediaLibraryEntityTranslatingContext-Protocol.h>
#import <MediaPlayer/MPModelRequestDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPMediaLibrary, NSArray, NSString;

@interface MPModelLibraryRequest : MPModelRequest <MPMediaLibraryEntityTranslatingContext, MPModelRequestDetailedKeepLocalStatusRequesting>
{
    BOOL _wantsDetailedKeepLocalRequestableResponse;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedItemIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    struct _NSRange _contentRange;
}

@property (copy, nonatomic) NSArray *allowedItemIdentifiers; // @synthesize allowedItemIdentifiers=_allowedItemIdentifiers;
@property (nonatomic) struct _NSRange contentRange; // @synthesize contentRange=_contentRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (readonly, nonatomic, getter=isMultiQuery) BOOL multiQuery;
@property (copy, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
