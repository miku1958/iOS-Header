//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHResourceLocalAvailabilityRequest;

__attribute__((visibility("hidden")))
@interface PUPhotosGridDownloadHelpContext : NSObject
{
    PHResourceLocalAvailabilityRequest *_resourceLocalAvailabilityRequest;
    NSString *_gridProgressIdentifier;
    CDUnknownBlockType _downloadHandler;
}

@property (copy, nonatomic) CDUnknownBlockType downloadHandler; // @synthesize downloadHandler=_downloadHandler;
@property (strong, nonatomic) NSString *gridProgressIdentifier; // @synthesize gridProgressIdentifier=_gridProgressIdentifier;
@property (strong, nonatomic) PHResourceLocalAvailabilityRequest *resourceLocalAvailabilityRequest; // @synthesize resourceLocalAvailabilityRequest=_resourceLocalAvailabilityRequest;

- (void).cxx_destruct;

@end

