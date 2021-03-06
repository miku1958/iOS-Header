//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUITapCommand.h>

#import <SearchUI/SearchUIFeedbackDelegate-Protocol.h>

@class NSString;

@interface SearchUIWatchListPunchoutCommand : SearchUITapCommand <SearchUIFeedbackDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsRowModel:(id)arg1 environment:(id)arg2;
- (void)performCommandWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)prefersModalPresentation;
- (void)presentViewController:(id)arg1;

@end

