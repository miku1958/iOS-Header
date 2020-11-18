//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUCallRequest-Protocol.h>
#import <TelephonyUtilities/TUVideoRequest-Protocol.h>

@class NSDate, NSString;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest>
{
    BOOL _wantsHoldMusic;
    BOOL _pauseVideoToStart;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    long long _behavior;
    NSDate *_dateAnswered;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

@property (nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property (strong, nonatomic) NSDate *dateAnswered; // @synthesize dateAnswered=_dateAnswered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property (nonatomic) BOOL pauseVideoToStart; // @synthesize pauseVideoToStart=_pauseVideoToStart;
@property (copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
@property (nonatomic) BOOL wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;

@end

