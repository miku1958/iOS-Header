//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMetadataItemFilterInternal, NSDictionary;

@interface AVMetadataItemFilter : NSObject
{
    AVMetadataItemFilterInternal *_itemFilterInternal;
}

@property (readonly) NSDictionary *whitelist;

+ (id)metadataItemFilterForSharing;

@end
