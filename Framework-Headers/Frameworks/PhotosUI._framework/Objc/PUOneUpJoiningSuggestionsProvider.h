//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUOneUpJoiningSuggestionsProvider : PUOneUpSuggestionsProvider
{
    NSArray *_suggestionsProviders;
}

@property (readonly, copy, nonatomic) NSArray *suggestionsProviders; // @synthesize suggestionsProviders=_suggestionsProviders;

- (void).cxx_destruct;
- (BOOL)canProvideSuggestionForAsset:(id)arg1;
- (id)init;
- (id)initWithSuggestionsProviders:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;

@end

