//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSXMLParserDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, WBSFeedElement;
@protocol OS_dispatch_queue, WBSFeedParserDelegate;

@interface WBSFeedParser : NSObject <NSXMLParserDelegate, NSCopying>
{
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSData *_data;
    WBSFeedElement *_root;
    NSMutableArray *_elementStack;
    id<WBSFeedParserDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBSFeedParserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginParsingData:(id)arg1;
- (void)_parseAsAtomFeed;
- (void)_parseAsRSSFeed;
- (void)_parsingFailedWithError:(id)arg1;
- (void)_parsingFinishedWithMetada:(id)arg1 entries:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)startParsing;

@end

