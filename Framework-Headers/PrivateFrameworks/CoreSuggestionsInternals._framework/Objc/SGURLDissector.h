//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

#import <CoreSuggestionsInternals/SGMailMessageProcessing-Protocol.h>

@class NSString;

@interface SGURLDissector : SGPipelineDissector <SGMailMessageProcessing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_titleFromMessagesSynthesizedTextContent:(id)arg1;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)supportedBundleIdentifiers;
- (id)urlsFromAttributes:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(BOOL)arg10;
- (id)urlsFromText:(id)arg1 handle:(id)arg2 dataDetectorMatches:(id)arg3 bundleIdentifier:(id)arg4 domainIdentifier:(id)arg5 uniqueIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 isOutgoingDocument:(BOOL)arg11;
- (id)urlsFromURLs:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(BOOL)arg10;

@end

