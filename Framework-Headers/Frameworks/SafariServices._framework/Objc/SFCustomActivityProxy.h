//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/NSCopying-Protocol.h>
#import <SafariServices/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    unsigned long long _activityProxyID;
}

@property (readonly, nonatomic) UIImage *activityImage; // @synthesize activityImage=_activityImage;
@property (readonly, nonatomic) unsigned long long activityProxyID; // @synthesize activityProxyID=_activityProxyID;
@property (readonly, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property (readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 proxyID:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

