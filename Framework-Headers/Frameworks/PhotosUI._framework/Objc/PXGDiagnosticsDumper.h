//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PXGDiagnosticsDumper : NSObject
{
    NSURL *_url;
}

@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)dumpContentsForAllGridViews;
- (id)dumpContentsForGridView:(id)arg1;
- (id)initWithDumpURL:(id)arg1;
- (struct CGImage *)newImageFromMTLTexture:(id)arg1;

@end
