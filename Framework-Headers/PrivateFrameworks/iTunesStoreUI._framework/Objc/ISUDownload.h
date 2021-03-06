//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, SSDownload;
@protocol OS_dispatch_queue;

@interface ISUDownload : NSObject
{
    SSDownload *_download;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) long long bytesDownloaded;
@property (readonly, nonatomic) long long bytesTotal;
@property (readonly, nonatomic, getter=isContentRestricted) BOOL contentRestricted;
@property (readonly, nonatomic) double estimatedSecondsRemaining;
@property (strong, nonatomic) SSDownload *managedDownload;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) NSString *phaseIdentifier;
@property (readonly, nonatomic, getter=isPurchase) BOOL purchase;
@property (readonly, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;
@property (readonly, nonatomic) NSNumber *storePreorderIdentifier;
@property (readonly, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSString *title;

+ (id)downloadExternalProperties;
+ (id)downloadProperties;
+ (void)initialize;
- (id)copyLocalizedStatusString;
- (void)dealloc;
- (id)initWithManagedDownload:(id)arg1;
- (void)resetPreorderState;

@end

