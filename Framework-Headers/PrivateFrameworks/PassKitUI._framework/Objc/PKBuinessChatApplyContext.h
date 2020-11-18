//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString;

@interface PKBuinessChatApplyContext : NSObject <PKBusinessChatContext>
{
    NSString *_identifier;
    long long _intent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)groupParameters;
- (id)initWithIdentifier:(id)arg1 intent:(long long)arg2;
- (id)intentParameters;
- (BOOL)requiresAuthorization;

@end
