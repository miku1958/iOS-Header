//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIDictationConnection, UIDictationToken;

@protocol UIDictationConnectionTokenFilterProtocol <NSObject>
- (void)dictationConnection:(UIDictationConnection *)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(BOOL)arg3;
- (void)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 processFilteredToken:(UIDictationToken *)arg3 forFinalize:(BOOL)arg4;
- (BOOL)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(UIDictationToken *)arg3;
- (id)dictationConnection:(UIDictationConnection *)arg1 willFilterTokensWithLanguageModel:(NSString *)arg2 forFinalize:(BOOL)arg3;
- (struct __CFString *)resultTransformForLanguageModel:(NSString *)arg1;
@end

