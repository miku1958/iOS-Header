//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSString, NSUserActivity, UABestAppSuggestion;

@interface UAUserActivityProxy : NSObject <NSSecureCoding>
{
    BOOL _isRemoteActivity;
    NSString *_activityType;
    NSString *_bundleId;
    NSUserActivity *_internalActivity;
    UABestAppSuggestion *_suggestedActivity;
    unsigned long long _hashValue;
}

@property (readonly) NSString *activityType; // @synthesize activityType=_activityType;
@property (readonly) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property unsigned long long hashValue; // @synthesize hashValue=_hashValue;
@property (strong) NSUserActivity *internalActivity; // @synthesize internalActivity=_internalActivity;
@property (readonly) BOOL isRemoteActivity; // @synthesize isRemoteActivity=_isRemoteActivity;
@property (strong) UABestAppSuggestion *suggestedActivity; // @synthesize suggestedActivity=_suggestedActivity;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)accessActivity:(CDUnknownBlockType)arg1;
- (id)activityIfAvailible;
- (id)activitySubTitle;
- (id)activityTitle;
- (id)contentAttributeSet;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivity:(id)arg1 bundleId:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (void)launchActivityWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

