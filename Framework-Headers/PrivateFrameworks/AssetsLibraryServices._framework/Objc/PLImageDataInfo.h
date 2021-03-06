//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PLImageDataInfo : NSObject
{
    BOOL _deliveredPlaceholder;
    BOOL _canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

@property long long EXIFOrientation; // @synthesize EXIFOrientation=_EXIFOrientation;
@property (strong) NSURL *URL; // @synthesize URL=_URL;
@property (strong) NSString *UTI; // @synthesize UTI=_UTI;
@property BOOL canDownloadFromCloud; // @synthesize canDownloadFromCloud=_canDownloadFromCloud;
@property long long deliveredFormat; // @synthesize deliveredFormat=_deliveredFormat;
@property BOOL deliveredPlaceholder; // @synthesize deliveredPlaceholder=_deliveredPlaceholder;
@property (strong) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;

- (void).cxx_destruct;
- (id)description;

@end

