//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSTouchIconRequest.h>

@class WebBookmark;

__attribute__((visibility("hidden")))
@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest
{
    WebBookmark *_bookmark;
}

@property (readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;

+ (id)requestWithBookmark:(id)arg1;
+ (id)requestWithBookmark:(id)arg1 iconGenerationEnabled:(BOOL)arg2;
- (void).cxx_destruct;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 iconGenerationEnabled:(BOOL)arg2;
- (id)uniqueIdentifier;

@end

