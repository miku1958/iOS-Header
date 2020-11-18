//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SGConversationHistory : NSObject
{
    NSArray *_messages;
    NSArray *_featurization;
    NSString *_likelyLanguage;
}

@property (readonly) NSArray *featurization; // @synthesize featurization=_featurization;
@property (readonly) NSString *likelyLanguage; // @synthesize likelyLanguage=_likelyLanguage;
@property (readonly) NSArray *messages; // @synthesize messages=_messages;

- (void).cxx_destruct;
- (id)initWithMessages:(id)arg1 featurization:(id)arg2;

@end

