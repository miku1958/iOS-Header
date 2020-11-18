//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BookmarkDAV/CoreDAVLeafDataPayload-Protocol.h>
#import <BookmarkDAV/NSXMLParserDelegate-Protocol.h>

@class CoreDAVErrorItem, NSArray, NSData, NSDictionary, NSMutableString, NSString, NSURL;

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate>
{
    NSURL *_bookmarkURL;
    NSURL *_serverID;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSString *_name;
    NSString *_syncKey;
    NSMutableString *_appleAttributeString;
    NSDictionary *_appleAttributes;
    int _parseState;
    int _ignoreLevel;
    CoreDAVErrorItem *_bulkUploadErrorItem;
}

@property (readonly, strong, nonatomic) NSDictionary *appleAttributes; // @synthesize appleAttributes=_appleAttributes;
@property (readonly, strong, nonatomic) NSURL *bookmarkURL; // @synthesize bookmarkURL=_bookmarkURL;
@property (strong, nonatomic) CoreDAVErrorItem *bulkUploadErrorItem; // @synthesize bulkUploadErrorItem=_bulkUploadErrorItem;
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (readonly, nonatomic) NSData *dataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSURL *serverID; // @synthesize serverID=_serverID;
@property (strong, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;

- (void)dealloc;
- (id)initWithBookmarkURL:(id)arg1 serverID:(id)arg2 name:(id)arg3 syncKey:(id)arg4 appleAttributes:(id)arg5;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)setPropertiesFromXBEL:(id)arg1;

@end

