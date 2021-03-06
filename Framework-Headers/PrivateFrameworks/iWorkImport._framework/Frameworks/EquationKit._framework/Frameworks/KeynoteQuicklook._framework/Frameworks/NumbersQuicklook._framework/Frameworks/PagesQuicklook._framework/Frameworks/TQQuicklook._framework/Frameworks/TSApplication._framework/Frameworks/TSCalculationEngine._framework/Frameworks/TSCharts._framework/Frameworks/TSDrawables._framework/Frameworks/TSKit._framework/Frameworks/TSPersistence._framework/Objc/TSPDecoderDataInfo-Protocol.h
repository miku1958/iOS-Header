//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@class NSString, TSPDataMetadata, TSPDigest;

@protocol TSPDecoderDataInfo <NSObject>

@property (readonly, nonatomic) TSPDataMetadata *dataMetadata;
@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *externalFilePath;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) NSString *preferredFilename;

@end

