//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject
{
    BOOL _indicatorExists;
    NSURL *_indicatorURL;
    long long _retryCount;
    long long _maxRetryCount;
}

@property (nonatomic) BOOL indicatorExists; // @synthesize indicatorExists=_indicatorExists;
@property (readonly, nonatomic) NSURL *indicatorURL; // @synthesize indicatorURL=_indicatorURL;
@property (nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property (nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property (readonly, nonatomic) BOOL updateDidCauseJetsam;

- (void).cxx_destruct;
- (void)_readIndicator;
- (void)_removeIndicator;
- (void)clear;
- (id)description;
- (id)initWithIndicatorDirectoryURL:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)markUpdate;

@end

