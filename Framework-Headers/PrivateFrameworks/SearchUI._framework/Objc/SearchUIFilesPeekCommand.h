//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIPeekCommand.h>

@interface SearchUIFilesPeekCommand : SearchUIPeekCommand
{
}

+ (BOOL)canPreviewRowModel:(id)arg1;
+ (id)fileURLForRowModel:(id)arg1;
+ (BOOL)supportsRowModel:(id)arg1 environment:(id)arg2;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1;
- (id)generateViewController;

@end
