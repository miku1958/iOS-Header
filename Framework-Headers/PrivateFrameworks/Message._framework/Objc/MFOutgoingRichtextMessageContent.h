//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent
{
    BOOL _textPartsAreHTML;
    MFPlainTextDocument *_plaintextAlternative;
    NSArray *_mixedContent;
}

@property (strong, nonatomic) NSArray *mixedContent; // @synthesize mixedContent=_mixedContent;
@property (strong, nonatomic) MFPlainTextDocument *plaintextAlternative; // @synthesize plaintextAlternative=_plaintextAlternative;
@property (nonatomic) BOOL textPartsAreHTML; // @synthesize textPartsAreHTML=_textPartsAreHTML;

- (void).cxx_destruct;
- (id)copy;
- (id)richtextContent;

@end

