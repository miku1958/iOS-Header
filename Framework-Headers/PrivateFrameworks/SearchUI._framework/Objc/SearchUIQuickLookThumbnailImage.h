//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

@class QLThumbnailGenerationRequest, SFSearchResult;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage
{
    BOOL _isCompact;
    SFSearchResult *_result;
    QLThumbnailGenerationRequest *_request;
}

@property BOOL isCompact; // @synthesize isCompact=_isCompact;
@property (weak) QLThumbnailGenerationRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) SFSearchResult *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithResult:(id)arg1 isCompact:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)url;

@end

