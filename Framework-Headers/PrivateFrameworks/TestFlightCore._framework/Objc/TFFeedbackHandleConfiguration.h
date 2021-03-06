//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TestFlightCore/NSCopying-Protocol.h>

@class NSString;

@interface TFFeedbackHandleConfiguration : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_incidentId;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;

+ (id)configurationFromUserInfo:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodedAsUserInfo;
- (id)initWithBundleIdentifier:(id)arg1;

@end

