//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/NSObject-Protocol.h>

@class NSDictionary, TIAutocorrectionList, TICandidateRequestToken;

@protocol TIKeyboardInputManagerToImplProtocol <NSObject>
- (void)processPayloadInfo:(NSDictionary *)arg1;
- (void)pushAutocorrections:(TIAutocorrectionList *)arg1 requestToken:(TICandidateRequestToken *)arg2;
@end
