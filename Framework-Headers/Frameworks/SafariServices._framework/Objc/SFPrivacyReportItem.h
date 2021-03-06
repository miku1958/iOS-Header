//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface SFPrivacyReportItem : NSObject <NSCopying>
{
    long long _type;
    id _userInfo;
}

@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 userInfo:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

