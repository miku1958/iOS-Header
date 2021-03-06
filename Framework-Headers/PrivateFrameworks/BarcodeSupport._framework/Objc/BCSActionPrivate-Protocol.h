//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/BCSAction-Protocol.h>

@class CPSClipMetadataRequest, NSArray, NSDictionary, NSString;

@protocol BCSActionPrivate <BCSAction>

@property (readonly, copy, nonatomic) NSArray *appLinks;
@property (strong, nonatomic) CPSClipMetadataRequest *clipMetadataRequest;
@property (readonly, nonatomic) long long codeType;
@property (readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly, nonatomic) BOOL isInvalidDataAction;
@property (readonly, nonatomic) BOOL isWiFiAction;

@end

