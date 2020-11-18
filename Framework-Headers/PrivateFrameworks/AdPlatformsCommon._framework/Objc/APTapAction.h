//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSURL;

@interface APTapAction : NSObject <NSSecureCoding>
{
    long long _actionType;
    NSURL *_actionURL;
    double _confirmedClickInterval;
    NSNumber *_adamIdentifier;
    NSDictionary *_iTunesMetadata;
}

@property long long actionType; // @synthesize actionType=_actionType;
@property (strong) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property (strong) NSNumber *adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property double confirmedClickInterval; // @synthesize confirmedClickInterval=_confirmedClickInterval;
@property (strong) NSDictionary *iTunesMetadata; // @synthesize iTunesMetadata=_iTunesMetadata;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
