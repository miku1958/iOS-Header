//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSString;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext
{
    NSMutableAttributedString *_content;
    NSMutableArray *_attachments;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    unsigned long long _offset;
    long long _baseWritingDirection;
    BOOL _extractAttachments;
    BOOL _hadBaseWritingDirectionAttribute;
}

@property (readonly, strong) NSArray *attachments; // @synthesize attachments=_attachments;
@property (readonly, strong) NSAttributedString *sanitizedContent; // @synthesize sanitizedContent=_content;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 extractAttachments:(BOOL)arg2;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parserDidEnd:(id)arg1;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;

@end

