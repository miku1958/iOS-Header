//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject
{
    NSString *contentType;
    NSArray *allowedContentTypes;
    long long contentLength;
    BOOL entireLengthAvailableOnDemand;
    BOOL byteRangeAccessSupported;
    NSDate *renewalDate;
    BOOL diskCachingPermitted;
}

@end

