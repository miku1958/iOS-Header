//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol NURAWImageProperties;

@protocol NUImageProperties <NSObject>

@property (readonly) long long alphaInfo;
@property (readonly) NSDictionary *auxiliaryImagesProperties;
@property (readonly) struct CGColorSpace *colorSpace;
@property (readonly) long long componentInfo;
@property (readonly) NSString *fileUTI;
@property (readonly) BOOL isFusedOvercapture;
@property (readonly) NSDictionary *metadata;
@property (readonly) long long orientation;
@property (readonly) id<NURAWImageProperties> rawProperties;
@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) NSURL *url;

@end

