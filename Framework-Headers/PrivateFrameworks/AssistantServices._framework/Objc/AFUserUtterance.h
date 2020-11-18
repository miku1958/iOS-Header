//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface AFUserUtterance : NSObject
{
    NSMutableArray *_phrases;
    NSMutableArray *_tokens;
    NSString *_text;
    NSDictionary *_correctionIdentifier;
}

@property (readonly, nonatomic) NSDictionary *correctionIdentifier; // @synthesize correctionIdentifier=_correctionIdentifier;
@property (readonly, nonatomic) NSArray *dictationResult;

- (void).cxx_destruct;
- (id)bestTextInterpretation;
- (id)description;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;
- (id)streamingTokens;

@end
