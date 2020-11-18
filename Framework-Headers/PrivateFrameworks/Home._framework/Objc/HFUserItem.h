//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFUserNameFormatter, HMHome, HMUser, NSString;
@protocol HFHomeKitObject;

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, NSCopying>
{
    HMHome *_home;
    HMUser *_user;
    HFUserNameFormatter *_userNameFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) unsigned long long nameStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMUser *user; // @synthesize user=_user;
@property (readonly, nonatomic) HFUserNameFormatter *userNameFormatter; // @synthesize userNameFormatter=_userNameFormatter;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;

@end
