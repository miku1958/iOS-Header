//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMAttributedStringParserContext.h>

@class NSArray, NSMutableArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext
{
    NSMutableArray *_inlinedFileTransferGUIDs;
    NSMutableArray *_standaloneFileTransferGUIDs;
    BOOL _foundBreadcrumbText;
}

@property (readonly, nonatomic) BOOL foundBreadcrumbText; // @synthesize foundBreadcrumbText=_foundBreadcrumbText;
@property (readonly, strong, nonatomic) NSArray *inlinedFileTransferGUIDs; // @synthesize inlinedFileTransferGUIDs=_inlinedFileTransferGUIDs;
@property (readonly, strong, nonatomic) NSArray *standaloneFileTransferGUIDs; // @synthesize standaloneFileTransferGUIDs=_standaloneFileTransferGUIDs;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parser:(id)arg1 foundBreadcrumbText:(id)arg2 withOptions:(unsigned int)arg3;
- (void)parserDidStart:(id)arg1;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;

@end
