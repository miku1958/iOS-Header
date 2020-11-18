//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXMLParser.h>

#import <CoreDAV/CoreDAVResponseBodyParser-Protocol.h>

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSString, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSSet *parseHints; // @synthesize parseHints=_parseHints;
@property (readonly) NSError *parserError; // @dynamic parserError;
@property (readonly, nonatomic) CoreDAVItem *rootElement;
@property (strong, nonatomic) CoreDAVXMLElementGenerator *rootElementGenerator; // @synthesize rootElementGenerator=_rootElementGenerator;
@property (readonly, nonatomic) CoreDAVErrorItem *rootError;
@property (strong, nonatomic) CoreDAVXMLElementGenerator *rootErrorGenerator; // @synthesize rootErrorGenerator=_rootErrorGenerator;
@property (readonly) Class superclass;

+ (BOOL)canHandleContentType:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;

@end

