//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <NewsToday/NNSyncableHeadline-Protocol.h>
#import <NewsToday/NNSyncableResult-Protocol.h>
#import <NewsToday/NNSyncableSection-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSDictionary (NNHeadlineSyncHelpers) <NNSyncableResult, NNSyncableSection, NNSyncableHeadline>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *sync_NewsURLString;
@property (readonly, nonatomic) NSString *sync_colorHexString;
@property (readonly, nonatomic) NSString *sync_excerpt;
@property (readonly, nonatomic) NSDate *sync_expirationDate;
@property (readonly, nonatomic) unsigned long long sync_headlineCount;
@property (readonly, nonatomic) NSArray *sync_headlines;
@property (readonly, nonatomic) NSString *sync_identifier;
@property (readonly, nonatomic) NSString *sync_name;
@property (readonly, nonatomic) NSString *sync_publisherIdentifier;
@property (readonly, nonatomic) NSData *sync_publisherLogoImageData;
@property (readonly, nonatomic) NSString *sync_publisherName;
@property (readonly, nonatomic) NSArray *sync_sections;
@property (readonly, nonatomic) NSData *sync_thumbnailImageData;
@property (readonly, nonatomic) NSString *sync_title;
@property (readonly, nonatomic) unsigned long long sync_type;
@property (readonly, nonatomic) NSString *sync_webURLString;

@end
