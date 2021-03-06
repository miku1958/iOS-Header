//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

#import <ClassroomKit/NSXMLParserDelegate-Protocol.h>

@class NSString, NSXMLParser;

@interface CRKParseOPFFilePathOperation : CATOperation <NSXMLParserDelegate>
{
    NSXMLParser *mContainerParser;
    NSString *mBookFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBookFilePath:(id)arg1;
- (BOOL)isAsynchronous;
- (void)main;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;

@end

