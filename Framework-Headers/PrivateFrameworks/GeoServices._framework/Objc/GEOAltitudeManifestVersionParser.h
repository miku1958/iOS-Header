//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSXMLParserDelegate-Protocol.h>

@class GEOFlyoverRegionVersions, NSError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate>
{
    struct GEOOnce_s _parsed;
    NSURL *_fileURL;
    GEOFlyoverRegionVersions *_versions;
    NSError *_parseError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)arg1;
- (id)parse:(id *)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end

