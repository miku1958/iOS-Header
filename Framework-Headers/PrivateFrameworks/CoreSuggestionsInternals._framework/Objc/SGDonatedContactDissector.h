//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

#import <CoreSuggestionsInternals/SGTextMessageProcessing-Protocol.h>

@class NSString;

@interface SGDonatedContactDissector : SGPipelineDissector <SGTextMessageProcessing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

@end
