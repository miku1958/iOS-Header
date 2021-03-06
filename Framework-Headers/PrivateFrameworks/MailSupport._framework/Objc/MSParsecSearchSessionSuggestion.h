//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailSupport/MSParsecSearchSessionResult-Protocol.h>

@class NSString;

@interface MSParsecSearchSessionSuggestion : NSObject <MSParsecSearchSessionResult>
{
    NSString *_resultID;
    NSString *_category;
}

@property (readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *resultID; // @synthesize resultID=_resultID;
@property (readonly) Class superclass;

+ (id)suggestionWithIdentifier:(id)arg1 category:(id)arg2;
- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)arg1 category:(id)arg2;

@end

