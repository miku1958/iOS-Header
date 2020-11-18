//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponent.h>

#import <Silex/SXComponentAdvertisingMetadataProviding-Protocol.h>

@class NSString, SXJSONDictionary;

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>
{
}

@property (readonly, nonatomic) NSString *accessibilityCaption; // @dynamic accessibilityCaption;
@property (readonly, nonatomic) SXJSONDictionary *advertising; // @dynamic advertising;
@property (readonly, nonatomic) double aspectRatio; // @dynamic aspectRatio;
@property (readonly, nonatomic) NSString *caption; // @dynamic caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePreroll; // @dynamic enablePreroll;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *resourceIdentifier; // @dynamic resourceIdentifier;
@property (readonly, nonatomic) NSString *stillImageIdentifier; // @dynamic stillImageIdentifier;
@property (readonly) Class superclass;

+ (id)typeString;
- (double)aspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)enablePrerollWithValue:(id)arg1 withType:(int)arg2;

@end

