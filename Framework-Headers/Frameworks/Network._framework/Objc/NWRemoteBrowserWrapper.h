//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, NWBrowser;

__attribute__((visibility("hidden")))
@interface NWRemoteBrowserWrapper : NSObject
{
    NSUUID *_clientID;
    NWBrowser *_browser;
}

@property (strong) NWBrowser *browser; // @synthesize browser=_browser;
@property (strong) NSUUID *clientID; // @synthesize clientID=_clientID;

- (void).cxx_destruct;

@end

